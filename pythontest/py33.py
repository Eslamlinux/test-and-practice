dic = {
    0:"eslam",
    1:"khalid"
}

print(dic)
dic.setdefault(2,"cool")
del dic[0]
dic.setdefault(0,"hassan")
print(dic)


print(dic.popitem())

a = ("one","tow","three")
b = 10

dd = dict.fromkeys(a, b)
print(dd)

print(dic)
for i in dic.values():
    print(i)
for i2 in dic.keys():
    print(i2)

for i3 in dic.items():
    print(i3)

for i4 ,i5 in dic.items():
    print(i4,i5)
print(type(dd))

