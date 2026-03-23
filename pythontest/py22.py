fruits = ["apple", "banAna", "Cherry", "kiwi", "mango","bc"]
newdta = []
for n in fruits:
    if("c") in n:
        newdta.append(n)

print(newdta)


newdta = [n for n in fruits if("a") in n]
print("\n")
print(newdta)


newdta = [n.upper() for n in fruits if(n.lower()) in n]
print("\n")
print(newdta)
