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