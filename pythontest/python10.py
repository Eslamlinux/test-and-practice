
lst = [10,20,30,40]
m = []

for num in lst:
    m.append(num*2)

print(m)


multi = [nm*2 for nm in lst]
print(multi)


multiwithif = [nm*2 for nm in lst if nm > 10]
print(multiwithif)


def fil(num):
    return num > 20
print(list(filter(fil,lst)))

ls = [5,2,3,4]
def sq(n):
    return n**2

print(list(map(sq,ls)))
