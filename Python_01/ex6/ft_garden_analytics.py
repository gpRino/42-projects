class Plant:

    class Stats:
        def __init__(self) -> None:
            self.grow_count = 0
            self.age_count = 0
            self.show_count = 0

        def display(self) -> None:
            print(
                f"Stats: {self.grow_count} grow, "
                f"{self.age_count} age, "
                f"{self.show_count} show")

    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self._height = float(height)
        self._age = age
        self.stats = Plant.Stats()

    def show(self) -> None:
        self.stats.show_count += 1
        print(f"{self.name}: {self._height}cm, {self._age} days old")

    def grow(self, cm: float) -> None:
        self.stats.grow_count += 1
        self._height += cm

    def age(self, days: int) -> None:
        self.stats.age_count += 1
        self._age += days

    @staticmethod
    def time(days: int) -> str:
        return f"Is {days} days more than a year? -> {days > 365}"

    @classmethod
    def anonymous(cls) -> "Plant":

        return cls("Unknown plant", 0.0, 0)


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        super().__init__(name, height, age)
        self.color = color
        self._bloomed = False

    def bloom(self) -> None:
        print(f"[asking the {self.name.lower()} to grow and bloom]")
        self.grow(8.0)
        self._bloomed = True

    def show(self) -> None:
        super().show()
        print(f"Color: {self.color}")
        if self._bloomed:
            print(f"{self.name} is blooming beautifully!")
        else:
            print(f"{self.name} has not bloomed yet")


class Tree(Plant):

    class Stats(Plant.Stats):
        def __init__(self) -> None:
            super().__init__()
            self.shade_count = 0

        def display(self) -> None:
            super().display()
            print(f"{self.shade_count} shade")

    def __init__(self, name, height, age, trunk_diameter):
        super().__init__(name, height, age)
        self.trunk_diameter = float(trunk_diameter)
        self.stats: Tree.Stats = Tree.Stats()

    def produce_shade(self) -> None:
        print(f"[asking the {self.name.lower()} to produce shade]")
        self.stats.shade_count += 1
        print(
            f"Tree {self.name} now produces a shade of "
            f"{self._height}cm long and {self.trunk_diameter}cm wide.")

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter: {self.trunk_diameter}cm")


class Seed(Flower):
    def __init__(self, name, height, age, color, seeds) -> None:
        super().__init__(name, height, age, color)
        self.seeds = seeds

    def bloom(self) -> None:
        print(f"[make {self.name.lower()} grow, age and bloom]")
        self.grow(30.0)
        self.age(20)
        self._bloomed = True
        self.seeds = 42

    def show(self) -> None:
        super().show()
        print(f"Seeds: {self.seeds}")


def print_statistics(plant: Plant) -> None:
    print(f"[statistics for {plant.name}]")
    plant.stats.display()


if __name__ == "__main__":
    print("=== Garden statistics ===")
    print("=== Check year-old")
    print(Plant.time(30))
    print(Plant.time(400))
    print()
    print("=== Flower")
    rose = Flower("Rose", 15.0, 10, "red")
    rose.show()
    print_statistics(rose)
    rose.bloom()
    rose.show()
    print_statistics(rose)
    print()
    print("=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    print_statistics(oak)
    oak.produce_shade()
    print_statistics(oak)
    print()
    print("=== Seed")
    sunflower = Seed("Sunflower", 80.0, 45, "yellow", 0)
    sunflower.show()
    sunflower.bloom()
    sunflower.show()
    print_statistics(sunflower)
    print()
    print("=== Anonymous")
    unknown = Plant.anonymous()
    unknown.show()
    print_statistics(unknown)
