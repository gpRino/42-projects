def input_temperature(temp_str: str) -> int:
    return int(temp_str)


def test_temperature() -> None:
    print("=== Garden Temperature ===")
    print()
    data = "25"
    print(f"Input data is '{data}'")
    temp = input_temperature(data)
    print(f"Temperature is now {temp}°C")
    print()
    data = "abc"
    print(f"Input data is '{data}'")
    try:
        input_temperature(data)
    except ValueError as error:
        print(f"Caught input_temperature error: {error}")
    print()
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
