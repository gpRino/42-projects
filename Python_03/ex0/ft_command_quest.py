import sys


def command_quest(argv: list[str]) -> None:
    print("=== Command Quest ===")
    print(f"Program name: {argv[0]}")
    count = len(argv)
    if len(argv) == 1:
        print("No arguments provided!")
    else:
        print(f"Arguments received: {count - 1}")
        number = 1
        for arg in argv[1:]:
            print(f"Argument {number}: {arg}")
            number += 1
    print(f"Total arguments: {count}")


if __name__ == "__main__":
    command_quest(sys.argv)
