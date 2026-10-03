#!/bin/python3

import typing
import abc


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


def main() -> None:
    print("=== Code Nexus - Data Stream ===\n")

    print("Initialize Data Stream...\n")
    ds: DataStream = DataStream()

    print("== DataStream statistics ==\n")
    ds.print_processors_stats()

    print("Registering Numeric Processor\n")
    numeric: NumericProcessor = NumericProcessor()
    ds.register_processor(numeric)

    print("Send first batch of data on stream:", end=' ')
    data: list[typing.Any] = [
            'Hello world',
            [
                3.14,
                -1,
                2.71
            ],
            [
                {
                    'log_level': 'WARNING',
                    'log_message': 'Telnet access! Use ssh instead'
                },
                {
                    'log_level': 'INFO',
                    'log_message': 'User wil is connected'
                }
            ],
            42,
            [
                'Hi',
                'five'
            ]
        ]
    print(data)
    ds.process_stream(data)

    print("== DataStream statistics ==\n")
    ds.print_processors_stats()

    print("Registering other data processors\n")
    text: TextProcessor = TextProcessor()
    log: LogProcessor = LogProcessor()
    ds.register_processor(text)
    ds.register_processor(log)

    print("Send the same batch again\n")
    ds.process_stream(data)

    print("== DataStream statistics ==\n")
    ds.print_processors_stats()

    print("Consume some elements from the data processors\n")
    numeric.output()
    numeric.output()
    text.output()
    log.output()

    ds.print_processors_stats()


if __name__ == "__main__":
    main()
