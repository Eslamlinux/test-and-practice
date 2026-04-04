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

myset.remove("cool")
print(myset)