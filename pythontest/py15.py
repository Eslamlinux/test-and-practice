str = "### i love python ###"

print(str.strip("#"))
print(str.lstrip("#"))
print(str.rstrip("#"))

str2 = "#@#@ i love python @#@#"
print(str2.strip("#@"))
print(str2.lstrip("#@"))
print(str2.rstrip("#@"))

numf1, numf2 ,numf3 = "1","1","11"
print(numf1.zfill(3))
print(numf2.zfill(3))
print(numf3.zfill(3))

toupper = "hello python"
print(toupper.upper())

tolower = "HELLO PYTHON"
print(tolower.lower())