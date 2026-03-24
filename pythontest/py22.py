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

newlist = ["kiwi" for n in fruits]
print("\n")
print(newlist)
print(len(newlist))

t = ("hellp","hi")
print(t)
print(type(t))
print(len(t))

tu1 = ("hello")
print(type(tu1))

tu2 = ("hello",)
print(type(tu2))

