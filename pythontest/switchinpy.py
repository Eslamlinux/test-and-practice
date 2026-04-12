

switch = 4
a = 10
match switch:
    case 1:
        print(1)
    case 2:
        print(2)
    case 3:
        print(3)
    case 4 if a > 5:
        print(4)
    case 5|6|7|8|9:
        print("from 5 to 9")
    case _:
        print("default")

i = 10
while i > 0 :
    i -=1
    if i == 5:
        continue
    print(i)
    # if i == 4:
    #     break
else:
    print("while is ended")

