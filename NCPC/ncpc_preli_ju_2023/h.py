import calendar
# choose a year between 1 to 9999
try:
    y= int(input())
    if 1>y or y>9999:
        print("please choose another year")
    else:
        for i in range (12):
            print(calendar.month(y,i+1))
except:
    print("please choose a year of calendar")