sett1 = {"hi","hey","how","okay"}
sett2 = {"hello","hoo"}


print(sett1 | sett2)
print(sett1.union(sett2))
sett1.add("cool")
print(sett1)
print(type(sett1))


newset = sett1.copy()
newset.add(6)
print(newset)
print(sett1)

sett1.remove("hi")
sett1.discard("hey")
print(sett1.pop())
print(sett1)
print(sett1)
print(sett1)
print(sett1)
print(sett1)
print(sett1)
