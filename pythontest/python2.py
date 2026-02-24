

# num1 = input("enter num 1: ")
# num2 = input("enter num 2: ")
# sum = int(num1) + int(num2)

# print(sum)

# comp = 10J
# print(type(comp))

str = "hello"
print(str.find('l'))

bol = 1
b = bool(bol)
print(b)

lis = ["hello", "mr","eslam",100,'h']

print(lis)
print(lis[0]," ",lis[1]," ",lis[2])
lis[2]= "semsem"
print(lis[0],lis[1],lis[2])

lis.append("world")
print(lis)
lis.insert(0,"first")
print(lis)
lis.remove("hello")
print(lis)


tuples = ("hello", "world", 10)

print(type(tuples))
print(tuples)

dicc = {'name':"eslam","address": "29 Nile st","phone": "01282667"}

print(type(dicc))
print(dicc)
print(dicc["name"],dicc["address"],dicc["phone"])

print(dicc.values())
