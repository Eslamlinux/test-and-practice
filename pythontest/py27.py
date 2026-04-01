ftuple = ("hello",1,2,3)

(a,b,*c) = ftuple
print(a)
print(b)
print(c)
print(type(c))

ttuple = (1,2,3,4,5,6)

(v1,v2,v3,*v4,v6) = ttuple
print(v1)
print(v2)
print(v3)
print(v4)
print(v6)