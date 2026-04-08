dic = {
    0:"eslam",
    1:"khalid",
    2:"hassan"
}

print(dic.get(0))
print(dic.keys())
print(dic.values())
print(dic.items())

d_tup_list = dic.items()
print(d_tup_list)
dic[0] = "hassan"
print(d_tup_list)

print(dic.get(0))
dic.update({0:"eslam"})
print(dic.get(0))

dic[3] ="three"
dic.pop(2)
print(dic)
dic.popitem()
print(dic)

del dic[1]
print(dic)

# del dic
# print(dic)

dic.clear()
print(dic)

