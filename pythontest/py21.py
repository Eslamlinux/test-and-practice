anotherlist = ["another"]
thislist = ["apple", "banana", "cherry"]

thislist[0] = "hello"
print(thislist)

thislist.insert(0,"semsem")
print(thislist)

thislist[0:2] = ["zero","one"]
print(thislist)

thislist.append("hello")
print(thislist)

thislist.append(anotherlist)
print(thislist)

thislist.extend(anotherlist)
print(thislist)