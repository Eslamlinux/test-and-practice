

ta = (1,2,5)
tb = (3,4,6)

tt = 3,
tt2 = 3,4
tu = ta + tb

print(tu)
print(type(tu))
print(type(tt))
print(type(tt2))
print(tt*3)

print(ta.count(2))
print(ta.index(2))
print(ta.index(1))

ll =["hello","ahmed","baba"]
print(type(ll))
print(ll)

ll.sort()
print(ll)

ll.sort(reverse=True)
print(ll)

ll2 = [1,5,8,0,6,4,7,2,3,6,9]
ll2.sort()
print(ll2)
def func(ln):
    return abs(ln-5)


ll2.sort(key= func)
print(ll2)
