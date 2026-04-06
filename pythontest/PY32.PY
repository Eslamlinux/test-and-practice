DIC1 = {
    1:"hello",
    2:{
        1:"cool",
        2:"good"
    },
    3:"root",
    "root":3
}

print(DIC1)

print(DIC1[2][1])

print("="*25)
fset = frozenset({"root","sys","Einux_Linux"})
nfset = fset.copy()
ndefset = fset.difference(DIC1)
print(nfset)
print(fset)
print(type(fset))
print(ndefset)

