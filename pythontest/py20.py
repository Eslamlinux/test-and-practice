def hello(str):
    print(f"hello {str}")


hello("Eslam")
hello("mohamed")

# Create variables
a , b = 15 , 4
# Print modulus
print(a%b)
# Print floor division
print(a//b)

# Print power
print(a**b)

# Add 10 to a
a += 10

print(a,b)

a = ["hi","whats","your" ,"name",7]
b = [10,30]

# a.append(b)
# print(a)
a.extend(b)
print(a)
print(len(a))

my = list(["hi",a])
by = list(("hellllo","okay"))
print(my)
print(by)
print(type(by))
print(type(my))

num = [5,3,7,9,41,2,3,11,10,8,7,6,4]
print(num)

num.sort()
print(num)

