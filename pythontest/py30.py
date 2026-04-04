# dic

id = {
    "name" : "eslam",
    "age" : 33,
    "nikname" : "El hazeen",
     "ee" :[1,2]
}

print(id)

print(id["name"])
print(id.get("name"))

myset = {"hi","hye"}

print(type(id))
print(type(myset))

myset.add("cool")
print(myset)

myset.update(id)
print(myset)

# myset.remove("col") couse error
myset.remove("cool")
print(myset)

myset.discard("hi")
myset.discard("col")
print(myset)
myset.add(1)
for i in myset:
    print(i)


mu1 = {"hi","hey","hi","hh",22}
mu2 = {"hi","hey","hh"}
mu3 = {"hi","hey"}
mu4 = {"hi","hey"}

callmu ={"all",2}

cset = callmu.union(mu1,mu2,mu3,mu4)

print(cset)

# ne = mu1.intersection(mu2)
ne = mu1 & mu2
print(mu1)
print(ne)

mu1.intersection_update(mu2)
print(mu1)