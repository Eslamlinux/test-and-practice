
fname = input("What's your name? ")
lname = input("what's your father name? ")
yemail = input("enter your email\n").strip()
fname = fname.strip().capitalize()
lname = lname.strip().capitalize()
usern = yemail[:yemail.index("@")]
website = yemail[yemail.index("@") + 1:]

usern = usern.strip()
website = website.strip()
print(f"Hello {fname} {lname} How Are You!")
print(f"your-user name is: {usern} from websit name {website}")
  

# email = "linuxeslam@gmail.com"
# print(email[:email.index("@")])