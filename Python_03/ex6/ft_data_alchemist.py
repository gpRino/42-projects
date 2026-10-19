import random
import sys


def main() -> None:
    print("=== Game Data Alchemist ===")
    print()

    # Stampa il nome del programma (sys.argv[0])
    print(f"Program name: {sys.argv[0]}")

    # Gestione degli argomenti passati
    args = sys.argv[1:]
    if not args:
        print("No arguments provided.")
    else:
        print(f"Arguments received: {len(args)}")
        for idx, arg in enumerate(args, start=1):
            print(f"Argument {idx}: {arg}")

    print()

    # Lista iniziale dei giocatori
    players: list[str] = [
        "Alice",
        "bob",
        "Charlie",
        "dylan",
        "Emma",
        "Gregory",
        "john",
        "kevin",
        "Liam",
    ]
    print(f"Initial list of players: {players}")

    # List comprehensions
    capitalized_all: list[str] = [name.capitalize() for name in players]
    print(f"New list with all names capitalized: {capitalized_all}")

    capitalized_only: list[str] = [name for name in players if name.istitle()]
    print(f"New list of capitalized names only: {capitalized_only}")

    print()

    # Dict comprehension per i punteggi casuali
    score_dict: dict[str, int] = {
        name: random.randint(1, 1000) for name in capitalized_all
    }
    print(f"Score dict: {score_dict}")

    avg_score: float = round(sum(score_dict.values()) / len(score_dict), 2)
    print(f"Score average is {avg_score}")

    high_scores: dict[str, int] = {
        name: score
        for name, score in score_dict.items()
        if score > avg_score
    }
    print(f"High scores: {high_scores}")


if __name__ == "__main__":
    main()
