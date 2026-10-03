def input_temperature(temp_str: str) -> int:
    temp = int(temp_str)
    if temp > 40:
        raise ValueError(f"{temp} is too hot for plants (max 40°C)")
    if temp < 0:
        raise ValueError(f"{temp} is too cold for plants (min 0°C)")
    return temp


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
    data = "100"
    print(f"Input data is '{data}'")
    try:
        input_temperature(data)
    except ValueError as hot_error:
        print(f"Caught input_temperature error: {hot_error}")
    data = "-50"
    print(f"Input data is '{data}'")
    try:
        input_temperature(data)
    except ValueError as cold_error:
        print(f"Caught input_temperature error: {cold_error}")
    print()
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
