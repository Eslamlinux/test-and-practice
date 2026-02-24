
def info(**kwarg):
    print(kwarg)
    print(type(kwarg))
    print("name is: ",kwarg["name"])
    print("age is: ",kwarg["age"])

info(name="eslam",age=33)

d={"name":"hassan","age":22}
info(**d)

def my_func(*nums):
    print(nums)
    print(type(nums))


nums = [1, 2, 3]
my_func(nums)