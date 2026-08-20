class Plant:
    def __init__(self, name: str, height: float, age, grow_rate=0):
        self.name = name
        self.height = height
        self.age = age
        self.grow_rate = grow_rate

    def show(self):
        return (f"{self.name}: {self.height}cm, {self.age} days old")

    def grow(self):
        self.height += self.grow_rate
        self.height = round(self.height, 1)
        return self

    def age_up(self):
        self.age += 1


if __name__ == "__main__":
    plants: list[Plant] = [
        Plant('Rose', 25.0, 30),
        Plant("Oak", 200.0, 365),
        Plant("Cactus", 5.0, 90),
        Plant("SunFlower", 80.0, 45),
        Plant("Fern", 15.0, 120)
    ]

    print("=== Plant Factory Output ===")

    for plant in plants:
        print(f"Created: {plant.grow().show()}")
