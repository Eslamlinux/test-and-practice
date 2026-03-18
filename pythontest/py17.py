str = "one tow one four"

print(str.replace(" one"," three",1))

list = ["hi","hey","hello"]

print(list)
print(" ".join(list))
print(" + ".join(list))
print(" * ".join(list))
print(" @ ".join(list))


print(type(list))
string = " ".join(list)
print(type(string))

age = 33
name = "eslam"
rank = 11

print("my name is: %s and my age is: %d rank is: %f"%(name , age,rank))
print("my name is: %s and my age is: %d rank is: %.10f"%(name , age,rank))
print("my name is {} \nmy age {}".format(name,age))
print("my name is {:s} \nmy age {:d}".format(name,age))
print("my rank {:.2f}".format(rank))

st1 = "hi"
st2 = "hey"
st3 = "hello"
lst = [st1,st2,st3]
print(" + ".join(lst))
print(type(lst))

print("age = {:_d}",age)
print("age = {:_d}".format(age))

a,b,c = "hi","hey","hello"

print("first {} second {} therd {}".format(a,b,c))
print("first {2} second {1} therd {0}".format(a,b,c))


num = 2456333
num1 = 2456333

print("num = {}".format(num))
print("num = {0:.2f} num1 {1:.3f}".format(num,num1))

print("my name is: {name} my age is: {age}")
print(f"my name is: {name} my age is: {age}")

# na = input("please enter name: ")
# print(f"hello {na}\n")

"""
for the next import
"""
import sys

print("python version: ",sys.version)

print("hello",end =" "); print("eslam") ,print("linux")
print("I am",10)

Key = 1020
print("keywords",Key)

list = ["hi","hey","hello"]
a,b,c = list
print(b)
print(type(b))
print(type(list))

print(a+b+c)

mycomplexnumber = 5+6j

print(mycomplexnumber)
print(type(mycomplexnumber))

print("real part is : {}".format(mycomplexnumber.real))
print("imaginary part is : {}".format(mycomplexnumber.imag))

print(type(complex(10)))

x = None


def sem():
    global x
    x = "hello"
print(x)
sem()
print(x)

def tryin(a = None):
    print(a)

tryin()

ran = range(10)
print(ran)

dic = {"name":"eslam","age":10}
set1 = {"hi","hey",10,"a","b"}
frozenset1=({"esl","hass"})
print(set1)
print(frozenset1)

# Create variables

x = 5
y = 3.14
z = "hello"

# Print the data type of each variable

print(type(x),type(y),type(z))

