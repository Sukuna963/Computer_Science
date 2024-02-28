################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Higher-Order Functions: Python supports higher-order functions, which are functions that take
    other functions as arguments or return functions as values. (Zamir, Faisal)
'''

A = 10
B = 5

def apply_opretaion(func, x, y):
    return func(x, y)

def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mult(x, y):
    return x * y

def div(x, y):
    return x / y

print(apply_opretaion(add, A, B))
print(apply_opretaion(sub, A, B))
print(apply_opretaion(mult, A, B))
print(apply_opretaion(div, A, B))