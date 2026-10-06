def garden_operations(operation_nuber: int) -> None:
    if operation_nuber == 0:
        int("abc")
    elif operation_nuber == 1:
        1 / 0
    elif operation_nuber == 2:
        open("/non/existing/file")
    elif operation_nuber == 3:
        "abc" + 1


def test_error_types() -> None:
    print("=== Garden Error Types Demo ===")
    for op in [0, 1, 2, 3, 4]:
        print(f"Testing operation {op}...")
        try:
             garden_operations(op)
        except ValueError as abc_error:
         print(f"Caught ZeroDivisionError: {abc_error}")
        except ZeroDivisionError as zero_error:
         print(f"Caught ZeroDivisionError: {zero_error}")
        except FileNotFoundError as file_error:
         print(f"Caught FileNotFoundError: {file_error}")
        except TypeError as type_error:
         print(f"Caught TypeError: {type_error}")
    print()
    print("Operation completed successfully")
    print()
    print("All error types tested successfully!")

if __name__ == "__main__":
    test_error_types()