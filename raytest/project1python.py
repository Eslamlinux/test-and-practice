
dictionary = {1111111111:"Amal",2222222222:"Mohammed"}

def sear():
    entry = input("please enter num to search:")
    if len(entry) > 10 or len(entry) <10:
        print("This is invalid number")
        return

    for c in dictionary.keys():
        if c == int(entry):
            print(dictionary[int(entry)])
            return
        
    print("Sorry, the number is not found")


sear()

