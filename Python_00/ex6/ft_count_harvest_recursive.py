def ft_count_harvest_recursive(c=None):
    first_call = False
    if c is None:
        c = int(input("Days until harvest: "))
        first_call = True
    if c != 0:
        ft_count_harvest_recursive(c - 1)
        print(f"Day {c}")
        if first_call is True:
            print("Harvest time!")
