def ft_water_reminder():
    answr = int(input("Days since last watering: "))
    if answr > 2:
         print ("Water the plants!")
    else:
         print ("Plants are fine")
ft_water_reminder()