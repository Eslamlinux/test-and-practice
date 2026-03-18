# from typing import List
# def input_type(value: str) -> str:
#     if value.isalpha():
#         return "string"
#     elif value[0].isdigit():
#         if(value.find('.')):
#             return "double"
#         else:
#             return "integer"
#     return value

class test:
    static_data = "eslam programm"
    def __init__(self,name,id):
        self.name = name
        self.id = id
        self._prot = "protected"
        self.__priv = "praivate"
    def _pro(self):
        print("protected")
    def __priva(self):
        print("private")

    def getpriva(self):
        self.__priva()
    def talk(self):
        print("my name ",self.name,"my id ",self.id)
        print(self)

opj = test(name="eslam",id=1112)
print(opj.name)
opj.talk()

class pp:
    def __init__(self,n,w,h):
        self.name = n
        self.whgit = w
        self.hight = h
        print("name ",n,"whgit ",w,"hight ",h)
    def tosum(a,b):
        print(a+b)

p = pp("eslam",55,173)

pp.tosum(10,10)

p.new_attribuate_from_out = 100

print(dir(p))
print(p.new_attribuate_from_out)

del(p.new_attribuate_from_out)
print(dir(p))

print(p)
del(p)
# print(p)


op1 = test("eslam",123)
op2 = test("eslam 2 ",223)

print(op1.static_data)
print(op2.static_data)
print(op1._pro())

op1.getpriva()