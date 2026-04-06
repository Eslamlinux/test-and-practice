DIC1 = {
    1:"hello",
    2:{
        1:"cool",
        2:"good"
    }
}

print(DIC1)

print(DIC1[2][1])

print("="*25)
fset = frozenset({"root","sys","Einux_Linux"})
nfset = fset.copy()
print(nfset)
print(fset)
print(type(fset))

