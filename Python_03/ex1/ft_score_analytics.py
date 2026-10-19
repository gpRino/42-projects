import sys


def score_analytics(argv: list[str]) -> None:
    print("=== Player Score Analytics ===")
    scores: list[int] = []
    for arg in argv[1:]:
        try:
            number = int(arg)
            scores += [number]
        except ValueError:
            print(f"Invalid parameter: '{arg}'")
    if len(scores) == 0:
        print(
            "No scores provided. "
            "Usage: python3 ft_score_analytics.py <score1> <score2> ..."
        )
        return
    print("Scores processed:", scores)
    print(f"Total players: {len(argv) - 1}")
    print(f"Total score: {sum(scores)}")
    avrg_score = sum(scores) / len(scores)
    print(f"Average score: {avrg_score}")
    print(f"High score: {max(scores)}")
    print(f"Low score: {min(scores)}")
    rng_score = max(scores) - min(scores)
    print(f"Score range: {rng_score}")


if __name__ == "__main__":
    score_analytics(sys.argv)
