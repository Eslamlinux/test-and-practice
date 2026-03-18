import datetime

data ={"eslam":33}

print(data)
print(type(data))

entry1 = input("enter name and date of birth: ")
entry2 = input("enter date of birth: ")
data.update(entry1,entry2)
print(data)