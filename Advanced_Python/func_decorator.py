################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Decorators: In python, a decorator is a function that takes another function
    as input and extends the behavior of the latter function(function that is
    passed as an argument to the decorator) without modifying its source code.
    A decorator allows you to modify or add functionality to a function dynamically
    at runtime. (Zamir, Faisal)
'''


def decorator(func):
    def wrapper():
        print("Before function execution")
        func()
        print("After function execution")

    return wrapper


# Decorator that converts the result to uppercase
def uppercase_decorator(func):
    def wrapper():
        result = func()
        return result.upper()
    
    return wrapper


@decorator
def greet():
    print("Hello Decorator!")


@uppercase_decorator
def message():
    return "Hello Decorator"


greet()
print(f'\n{message()}')