'''
    Assume you are given a variable named number (has a numerical value).
    Write a piece of Python code that prints out one of the following strings:

    positive if the variable number is positive
    negative if the variable number is negative
    zero if the variable number is equal to zero
'''

number = int(input("Enter with number: "))

if number > 0:
    print("number is positive")
elif number < 0:
    print("number is negative")
else:
    print("number is equal to zero")
