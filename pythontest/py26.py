sett1 = {"hi","hello"}
sett2 = {"hi","eslam"}
# print(type(sett1))

print(sett1.difference(sett2))
print(sett2.difference(sett1))

print(sett1.intersection(sett2))
print(sett2.intersection(sett1))

sett3 = {"hello","cool","hi"}
sett1.intersection_update(sett3)
print(sett1)

print(sett1.symmetric_difference(sett3))

print(sett1)

sett1.symmetric_difference_update(sett3)
print(sett1)
