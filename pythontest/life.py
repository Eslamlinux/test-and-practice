
Age = int(input("Enter youre Age: "))

days = Age * 365
if Age < 100 and Age > 1:
 print(f"firs your days is {days:,}")
elif Age >= 100 and Age < 130:
 print(f"cool days is {days:,}")
else:
 print("not included")