class Plant:
    def __init__(self, name, height, age, grow_rate):
        self.name = name
        self.height = height
        self.age = age
        self.grow_rate = grow_rate

    def show(self):
        print(f"{self.name}: {self.height}cm, {self.age} days old")

    def grow(self):
        self.height += self.grow_rate
        self.height = round(self.height, 1)
        return self.grow_rate

    def age_up(self):
        self.age += 1


if __name__ == "__main__":
    day = 1
    cm = 0

    print("=== Garden Plant Growth ===")
    rose = Plant("Rose", 25, 30, 0.8)
    rose.show()
    while day != 8:
        print(f"=== Day {day} ===")
        cm += rose.grow()
        rose.age_up()
        rose.show()
        day += 1
print(f"Growth this week:  {cm}cm")
