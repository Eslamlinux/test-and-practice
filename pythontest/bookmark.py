data = []

much = 5
while much > 0:
    web = input("enter the url without https://www.   or .com\n")
    data.append(f"https://www.{web}.com")
    much -=1
    print(f"{len(data)} added , {much} left")

for x in data:
    print(x)