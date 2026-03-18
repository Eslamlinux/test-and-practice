import random

# file1 = open("myfileinby.txt","w")

# file1.write("hello semsem\nhow are you")
# file1.close()

file1 = open("myfileinby.txt","a")
file1.write("\nnew")
file1.close()
file1 = open("myfileinby.txt","r")
print(file1.read(24))

def system(order):
    if order == "clear" or order == "Clear" or order == "CLEAR" or order == "clean" or order == "Clean" or order == "CLEAN":
        print("clear")

system("clear")

system("Clear")

system("clean")

system("Clean")

system("CLEAN")

name = "eslam linux"

print("hello \"" + name + "\" to our place")
print("hello" ,name, "to our place")
print(name.index("a"))
print(name.replace("eslam","mohamed"))
print(name)
num = 123
print(str(num) + " " +name)

print(round(3.5))
print(round(3.4))

maxnum = 10
print(random(maxnum))