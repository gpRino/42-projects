import math


def get_player_pos() -> tuple[float, float, float]:
    while True:
        text = input("Enter new coordinates as floats in format 'x,y,z': ")
        parts = text.split(",")
        if len(parts) != 3:
            print("Invalid syntax")
            continue
        values: list[float] = []
        for part in parts:
            try:
                values += [float(part)]
            except ValueError as error:
                print(f"Error on parameter '{part}': {error}")
                break
        if len(values) == 3:
            return (values[0], values[1], values[2])


def calculate_distance(
    a: tuple[float, float, float], b: tuple[float, float, float]
) -> float:
    return math.sqrt(
        (b[0] - a[0]) ** 2 + (b[1] - a[1]) ** 2 + (b[2] - a[2]) ** 2
    )


if __name__ == "__main__":
    print("=== Game Coordinate System ===")
    print("Get a first set of coordinates")
    first = get_player_pos()
    x, y, z = first
    print(f"Got a first tuple: {first}")
    print(f"It includes: X={x}, Y={y}, Z={z}")
    center = (0.0, 0.0, 0.0)
    print(f"Distance to center: {round(calculate_distance(center, first), 4)}")
    print("Get a second set of coordinates")
    second = get_player_pos()
    print(
        "Distance between the 2 sets of coordinates: "
        f"{round(calculate_distance(first, second), 4)}"
    )
