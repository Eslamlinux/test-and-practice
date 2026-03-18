try:
    num1 = int(input("enter num 1: "))
    num2 = int(input("enter num2: "))
    print("result= ",num1/num2)
except:
    print("Error")
else:
    print("no error  .")

finally:
    print("end of code finally")
