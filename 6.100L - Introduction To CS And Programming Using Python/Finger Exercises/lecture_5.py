'''
    Assume you are given a string variable named my_str.
    Write a piece of Python code that prints out a new string containing the even indexed characters of my_str.
    For example, if my_str = "abcdefg" then your code should print out aceg.
'''

my_str = input("Enter a String")
new_str = ""

for position in range(len(my_str)):
    if position % 2 == 0:
        new_str += my_str[position]

print(new_str)
