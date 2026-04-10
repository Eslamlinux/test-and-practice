
fname = input("What's your name? ")
lname = input("what's your father name? ")

fname = fname.strip().capitalize()
lname = lname.strip().capitalize()

print(f"Hello {fname} {lname} How Are You!")
  

email = "linuxeslam@gmail.com"
print(email[:email.index("@")])