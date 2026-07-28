def  ft_plant_age():
    answr = int(input("Enter plant age in days: "))
    if answr > 60:
        print ("Garden is ready to harvest!")
    else:
        print ("Plant needs more time to grow.")
ft_plant_age()