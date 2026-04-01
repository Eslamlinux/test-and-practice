se1 = {1,2,3,4}
se2 = {1,2,3,4,5}


print(se2.issuperset(se1))
print(se1.issuperset(se2))

print(se1.issubset(se2))
print(se2.issubset(se1))
print(se1.isdisjoint(se2))
se3 = {2,1,4,6,8}
print(se1.isdisjoint(se3))