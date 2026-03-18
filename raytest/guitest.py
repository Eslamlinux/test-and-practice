import tkinter as tk

root = tk.Tk()
root.title("test gui")
root.geometry("300x200")
lable = tk.Label(root, text= "okay")
lable.pack(pady=20)

root.mainloop()
