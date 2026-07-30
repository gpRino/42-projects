def ft_plant_age():
    answr = int(input("Enter plant age in days: "))
    if answr > 60:
        print("Plant is ready to harvest!")
    else:
        print("Plant needs more time to grow.")
