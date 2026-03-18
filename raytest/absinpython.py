import math
import random
import datetime
a = -845

print(abs(a))

b = 1.40
c = 1.6
d = 1.5666
print(round(b))
print(round(c))
print(round(d,2))
print(round(d,3))
print(pow(5,2))
print(math.sqrt(25))

numbers = [10,22,50,60]

print(max(numbers))
print(min(numbers))
print(type(numbers))
print(sum(numbers))

print(math.remainder(6,3))
print(6%3)

print(random.randint(1,10))

date = datetime.date(2026,1,20)
now = datetime.datetime.today()

print(date.year)
print(date.day)
print(date.today())

time = datetime.time(now.hour,now.minute,now.second)

print(time)
print(time.hour)


print(now.time())


print(date.strftime('%A %B %Y'))

print(time.strftime('%I %M %S'))