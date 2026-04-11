

switch = 4

match switch:
    case 1:
        print(1)
    case 2:
        print(2)
    case 3:
        print(3)
    case 4:
        print(4)
    case 5|6|7|8|9:
        print("from 5 to 9")
    case _:
        print("default")