import random

ALL_ACHIEVEMENTS: list[str] = [
    "Crafting Genius",
    "Strategist",
    "World Savior",
    "Master Explorer",
    "Collector Supreme",
    "Untouchable",
    "Boss Slayer",
    "Unstoppable",
    "Speed Runner",
    "Survivor",
    "Treasure Hunter",
    "First Steps",
    "Sharp Mind",
    "Hidden Path Finder",
]


def gen_player_achievements() -> set[str]:
    count = random.randint(1, len(ALL_ACHIEVEMENTS))
    return set(random.sample(ALL_ACHIEVEMENTS, count))


if __name__ == "__main__":
    print("=== Achievement Tracker System ===")
    print()
    players = ["Alice", "Bob", "Charlie", "Dylan"]
    player_achievements: dict[str, set[str]] = {}
    for name in players:
        player_achievements[name] = gen_player_achievements()
        print(f"Player {name}: {player_achievements[name]}")
    print()
    all_distinct: set[str] = set()
    for achievements in player_achievements.values():
        all_distinct = all_distinct.union(achievements)
    print(f"All distinct achievements: {all_distinct}")
    print()
    common_ach = set(ALL_ACHIEVEMENTS)
    for achievements in player_achievements.values():
        common_ach = common_ach.intersection(achievements)
    print(f"Common achievements: {common_ach}")
    print()
    for name in players:
        other_achievements: set[str] = set()
        for other_name, achievements in player_achievements.items():
            if other_name != name:
                other_achievements = other_achievements.union(achievements)
        only_ach = player_achievements[name].difference(other_achievements)
        print(f"Only {name} has: {only_ach}")
    print()
    all_set = set(ALL_ACHIEVEMENTS)
    for name in players:
        diff_ach = all_set.difference(player_achievements[name])
        print(f"{name} is missing: {diff_ach}")
