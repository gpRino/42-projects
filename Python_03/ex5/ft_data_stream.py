import random
from typing import Generator


def gen_event() -> Generator[tuple[str, str], None, None]:
    players = ["alice", "bob", "charlie", "dylan"]
    actions = [
        "run",
        "eat",
        "sleep",
        "grab",
        "move",
        "climb",
        "swim",
        "release",
        "use",
    ]
    while True:
        yield (random.choice(players), random.choice(actions))


def consume_event(
    events_list: list[tuple[str, str]],
) -> Generator[tuple[str, str], None, None]:
    while events_list:
        index = random.randint(0, len(events_list) - 1)
        event = events_list.pop(index)
        yield event


if __name__ == "__main__":
    print("=== Game Data Stream Processor ===")
    event_gen = gen_event()
    for i in range(1000):
        name, action = next(event_gen)
        print(f"Event {i}: Player {name} did action {action}")
    event_list = [next(event_gen) for _ in range(10)]
    print(f"Built list of 10 events: {event_list}")
    for event in consume_event(event_list):
        print(f"Got event from list: {event}")
        print(f"Remains in list: {event_list}")
