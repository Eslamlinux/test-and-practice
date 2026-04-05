
setdata = set()
def startwork():
    entry = input("please Enter the value: ")
    if entry == "x":
        return "x"
    if entry == "pr":
        print(setdata)
        print(type(setdata))
    if(entry != "pr"):
        setdata.add(entry)
        entry = ""
while(startwork() != "x"):
    startwork()

