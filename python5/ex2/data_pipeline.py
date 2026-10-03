#!/bin/python3

import typing
import abc


class ExportPlugin(typing.Protocol):
    def process_output(self, data: list[tuple[int, str]]) -> None:
        ...


class CSVPlugin:
    def process_output(self, data: list[tuple[int, str]]) -> None:
        print("CSV Output:")
        print(",".join(content for _, content in data))


class JSONPlugin:
    def process_output(self, data: list[tuple[int, str]]) -> None:
        items: list[str] = [f'"item_{i}": "{c}"' for i, c in data]
        print("JSON Output:")
        print("{" + ", ".join(items) + "}")


class DataProcessor(abc.ABC):
    def __init__(self) -> None:
        self.data: list[tuple[int, str]] = []
        self.index = 0

    @abc.abstractmethod
    def validate(self, data: typing.Any) -> bool:
        pass

    @abc.abstractmethod
    def ingest(self, data: typing.Any) -> None:
        pass

    def output(self) -> tuple[int, str]:
        if not self.data:
            raise IndexError("No data available on processor")
        return self.data.pop(0)


class NumericProcessor(DataProcessor):
    def validate(self, data: typing.Any) -> bool:
        if isinstance(data, (int, float)):
            return True
        elif isinstance(data, list):
            return all(isinstance(item, (int, float)) for item in data)
        return False

    def ingest(
                self,
                input_data: int | float | list[int] |
                list[float] | list[int | float]
              ) -> None:
        if not self.validate(input_data):
            raise Exception("Improper numeric data")
        if isinstance(input_data, list):
            for item in input_data:
                self.data.append((self.index, str(item)))
                self.index += 1
        else:
            self.data.append((self.index, str(input_data)))
            self.index += 1


class TextProcessor(DataProcessor):
    def validate(self, data: typing.Any) -> bool:
        if isinstance(data, (str)):
            return True
        elif isinstance(data, list):
            return all(isinstance(item, (str)) for item in data)
        return False

    def ingest(self, input_data: str | list[str]) -> None:
        if not self.validate(input_data):
            raise Exception("Improper string data")
        if isinstance(input_data, list):
            for item in input_data:
                self.data.append((self.index, item))
                self.index += 1
        else:
            self.data.append((self.index, input_data))
            self.index += 1


class LogProcessor(DataProcessor):
    def validate(self, data: typing.Any) -> bool:
        if isinstance(data, dict):
            return all(
                        isinstance(key, str) and isinstance(value, str)
                        for key, value in data.items()
                      )
        elif isinstance(data, list):
            return all(
                        isinstance(item, dict) and
                        all(
                            isinstance(key, str) and isinstance(value, str)
                            for key, value in item.items()
                           )
                        for item in data
                      )
        return False

    def ingest(
            self,
            input_data: dict[str, str] | list[dict[str, str]]
            ) -> None:
        if not self.validate(input_data):
            raise Exception("Improper log data")
        if isinstance(input_data, list):
            for item in input_data:
                self.data.append((self.index, ": ".join(item.values())))
                self.index += 1
        else:
            self.data.append((self.index, ": ".join(input_data.values())))
            self.index += 1


class DataStream:
    def __init__(self) -> None:
        self.processors: list[DataProcessor] = []

    def register_processor(self, proc: DataProcessor) -> None:
        self.processors.append(proc)

    def process_stream(self, stream: list[typing.Any]) -> None:
        for item in stream:
            processed: bool = False
            for proc in self.processors:
                if proc.validate(item):
                    try:
                        proc.ingest(item)
                    except Exception as ex:
                        print("DataStream error - Ingestion failed:", ex)
                    processed = True
                    break
            if not processed:
                print("DataStreamError:Can't process element in stream:", item)

    def print_processors_stats(self) -> None:
        if not self.processors:
            print("No processor found, no data\n")
            return
        for proc in self.processors:
            name: str = type(proc).__name__
            name = name.replace("Processor", " Processor")
            print(
                    f"{name}:  total {proc.index} items processed,"
                    f" remaining {len(proc.data)} on processor"
                 )

    def output_pipeline(self, nb: int, plugin: ExportPlugin) -> None:
        for proc in self.processors:
            out_list: list[tuple[int, str]] = []
            i: int = 0
            while i < nb and proc.data:
                out = proc.output()
                out_list.append(out)
                i += 1
            plugin.process_output(out_list)


def main() -> None:
    print("=== Code Nexus - Data Pipeline ===\n")
    print("Initialize Data Stream...\n")

    stream = DataStream()

    print("== DataStream statistics ==\n")
    stream.print_processors_stats()

    print("Registering Processors\n")
    stream.register_processor(NumericProcessor())
    stream.register_processor(TextProcessor())
    stream.register_processor(LogProcessor())

    first_batch = [
        "Hello world",
        [3.14, -1, 2.71],
        [
            {
                "log_level": "WARNING",
                "log_message": "Telnet access! Use ssh instead"
            },
            {
                "log_level": "INFO",
                "log_message": "User wil is connected"
            }
        ],
        42,
        ["Hi", "five"]
    ]

    print(f"Send first batch of data on stream: {first_batch}\n")
    stream.process_stream(first_batch)

    print("== DataStream statistics ==\n")
    stream.print_processors_stats()

    print("Send 3 processed data from each processor to a CSV plugin:\n")
    stream.output_pipeline(3, CSVPlugin())

    print("\n== DataStream statistics ==\n")
    stream.print_processors_stats()

    second_batch = [
        21,
        ["I love AI", "LLMs are wonderful", "Stay healthy"],
        [
            {
                "log_level": "ERROR",
                "log_message": "500 server crash"
            },
            {
                "log_level": "NOTICE",
                "log_message": "Certificate expires in 10 days"
            }
        ],
        [32, 42, 64, 84, 128, 168],
        "World hello"
    ]

    print(f"\nSend another batch of data: {second_batch}\n")
    stream.process_stream(second_batch)

    print("== DataStream statistics ==\n")
    stream.print_processors_stats()

    print("Send 5 processed data from each processor to a JSON plugin:\n")
    stream.output_pipeline(5, JSONPlugin())

    print("== DataStream statistics ==\n")
    stream.print_processors_stats()


if __name__ == "__main__":
    main()
