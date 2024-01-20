year = int(input("Enter a year : "))

if year%4==0:
    if year%100==0:
        if year%400==0:
            print("year is a leap year as well as century year.")
        else:
            print("year is century year but not leap year.")
    else: 
        print("year is a leap year.")
else:
    print("not a leap year.")