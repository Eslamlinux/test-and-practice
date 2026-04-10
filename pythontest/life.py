
Age = int(input("Enter youre Age: "))

days = Age * 365
if Age < 100 and Age > 1:
 print("#" * 50)
 print(f" firs your days is {days:,} ".center(50,"#"))
 print("#" * 50)
elif Age >= 100 and Age < 130:
 print(f"cool days is {days:,}")
else:
 print("not included")

print("cool" if Age > 1 and Age < 100 else "not cool")

