dic1 = {1:"one",2:"tow",3:"three"}
# canot copy like that it will be refrance only
dic2 = dic1

dic1[4] = 4
print(dic2)

# right way to copy item
dic3 = dic1.copy()
print(dic3)
dic1[5] = "hi"
print(dic3)

diccopy = dict(dic3)
diccopy[1] = "zerro"
print(diccopy)

ls = list([dic1.keys() ,dic1.values()])
print(type(ls))
print(ls[0])
print(ls[1])

for l in ls:
    print(l)