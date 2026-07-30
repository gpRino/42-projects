def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    t = seed_type.capitalize()
    if unit == "packets":
        print(f"{t} seeds: {quantity} packets available")
    elif unit == "grams":
        print(f"{t} seeds: {quantity} grams total")
    elif unit == "area":
        print(f"{t} seeds: covers {quantity} square meters")
    else:
        print("Unknown unit type")
