
str = "a123"
boolstr = str.isalnum()

print(boolstr)
print(type(boolstr))

boolstr = str.isdigit()

print(boolstr)

newst = "     hello "

print(newst.strip())

torep = "\nhi\nhello"
torep.replace("\n","-")
print(torep)

txt3 = "My name is {1}, and I'm {0} years old".format(30, 'Reem')
print(txt3)