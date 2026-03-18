str = "hElLo"
print(str.capitalize()) # لجعل اول حرف كبير وباقي الحروف صغيرة

print(str.casefold()) #لجعل كل الجرف صغيرة 

print(str.center(11,"*")) #ازاحة النص بقدر معين 

print(str.count("E")) # عد عدد الرموز في النص

print(str.encode("utf-8"))

print(str.endswith("o"))
print(str.endswith("L"))

str1 = "H\te\tl\tl\to"
print(str1)
print(str1.expandtabs(2).center(15))
print(str1.expandtabs(1))
print(str1.expandtabs(2))
print(str1.expandtabs(4))
print(str1.expandtabs(8))
print(str1.expandtabs(10))


# Create the variable
txt = "Hello, World!"
# Print characters from index 2 to 5
print(txt[2:5])
# Print in upper case
print(txt.upper())
# Create the name variable
name = "Python"
# Print using an f-string
print(f"I love {name}")

print(10 > 9 )

print(bool("abc"))
print(bool(0))

print(2**2) #حساب الاسس

print(2//2)

print(8/7)
print(8//7)
print(15 % 4)
print(5&3)
print(3&5)

print(x:=3)
print(type(x))

x = x >> 3
print(x)

x = x << 3
print(x)

print(4//2)
print(4/2)

a = 5
b = 5
print(a is b)
print(a is x)
print("W" in txt )

print(6 & 3)
print(6 | 3)
print(6 ^ 3)
print(~ 3)

