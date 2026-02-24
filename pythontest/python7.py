

i ,x ,y = 1,2,3
print('first %d second %d therd %d'% (i,x,y))

txt = "a b c"

tosplit = txt.split()

print(tosplit)

print(type(tosplit))

print(tosplit[0])
print(tosplit[1])
print(tosplit[2])
tosplit2 = txt.split("a")
print(tosplit2)
# print(tosplit2[0])
# print(tosplit2[1])


tostring = "*".join(tosplit)

print(tostring)
print(type(tostring))