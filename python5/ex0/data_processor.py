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


def main() -> None:
    print("=== Code Nexus - Data Processor ===\n")

    print("Testing Numeric Processor...")

    input_1: int = 42
    input_2: str = "Hello"
    numeric = NumericProcessor()

    print(f"Trying to validate input '{input_1}': {numeric.validate(input_1)}")
    print(f"Trying to validate input '{input_2}': {numeric.validate(input_2)}")
    print("Test invalid ingestion of string 'foo' without prior validation:")
    try:
        numeric.ingest("foo")
    except Exception as ex:
        print("Got exception:", ex)
    input_3: list[int] = [1, 2, 3, 4, 5]
    print("Processing data:", input_3)
    numeric.ingest(input_3)

    print("Extracting 3 values...")
    out1 = numeric.output()
    out2 = numeric.output()
    out3 = numeric.output()

    print(f"Numeric value {out1[0]}: {out1[1]}")
    print(f"Numeric value {out2[0]}: {out2[1]}")
    print(f"Numeric value {out3[0]}: {out3[1]}")

    print("\nTesting Text Processor...")
    text = TextProcessor()
    print(f"Trying to validate input '{input_1}': {text.validate(input_1)}")
    input_4: list[str] = ['Hello', 'Nexus', 'World']
    print("Processing data:", input_4)
    text.ingest(input_4)
    print("Extracting 1 value...")
    out4: tuple[int, str] = text.output()
    print(f"Text value {out4[0]}: {out4[1]}")

    print("\nTesting Log Processor...")
    log = LogProcessor()
    print(f"Trying to validate input '{input_2}': {log.validate(input_2)}")
    input_5: list[dict[str, str]] = [
        {
            "log_level": "NOTICE",
            "log_message": "Connection to server"
        },
        {
            "log_level": "ERROR",
            "log_message": "Unauthorized access!!"
        }
    ]
    print("Processing data:", input_5)
    log.ingest(input_5)
    print("Extracting 2 values...")
    out5: tuple[int, str] = log.output()
    out6: tuple[int, str] = log.output()
    print(f"Log entry {out5[0]}: {out5[1]}")
    print(f"Log entry {out6[0]}: {out6[1]}")


if __name__ == "__main__":
    main()
