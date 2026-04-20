def func(*tupl):
    print(tupl)
    print(type(tupl))

func("eslam","hassan")

def funcone():
    print("from one")
    def functow():
        print("from tow")
    functow()

funcone()
