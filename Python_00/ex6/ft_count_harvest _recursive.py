def ft_count_harvest_recursive(c=None):
    first_call = False
    if c == None:
        c = int(input("Days until Harvest: "))
        bool = True
    if c != 0:
        ft_count_harvest_recursive(c - 1)
        print(f"Day {c}")
        if first_call == True:
            print("Harvest time!")