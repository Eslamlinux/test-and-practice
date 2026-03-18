import asyncio

async def func():
    print("1 sec")
    await asyncio.sleep(1)
    print("2 sec")
    await asyncio.sleep(2)
    print("3 sec")
    await asyncio.sleep(3)
    print("end")

asyncio.run(func())

print(type(2 == 2))
# print(help("keywords"))
help("keywords")
