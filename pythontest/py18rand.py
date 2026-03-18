import random


# x = 1
# while x > 0:
#     randnum = random.randrange(1,10)
#     print(randnum)
    
    
# s = str(1)
s = int(1)
s = float(1)
print(type(s))
print(s)

a = """   Lorem ipsum, dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua. """
print(a)
print("do" in a)
print("do" not in a)
if "sit" in a:
    print("find it")
else:
    print("not find it")

if "cool" in a:
    print("find it")
else:
    print("not find it")

print(a[-6:-3])

print(a.strip())

print(a.replace("L" , "l"))


print(a.split(","))
print(type(a.split(",")))

print(type(a.replace("e","E")))

age = 10

name = "lucka"

print("my name is: {} my age is: {}".format(name,age))
print(f"my name is: {name} my age is: {age}")


print(f"age is: {age:.2f}")

print(f"the pric will be {2+3} dolers")

print(f"{5}")


hello = "hello world"
print(hello)
print(type(hello))

print("========== hello ===========\n")
