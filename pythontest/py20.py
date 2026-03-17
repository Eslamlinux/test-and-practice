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