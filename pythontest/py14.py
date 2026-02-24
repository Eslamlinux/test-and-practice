st1 = "hello 'semsem'"
print(st1)
st2 = 'hello "semsem"'
print(st2)

st3 = """hello
eslam
semsem "eslam" '\\semsem\\'
linux 
hi \
linux
"""
print(st3)

print(st3[5:11])
print(st3[10:14])
print(st3[12:18])
print(st3[45:])
print(st3[:47])

print("------------ scal ---------------------")
print(st3[::1])
print(st3[::2])