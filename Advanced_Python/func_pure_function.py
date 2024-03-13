################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Pure Function: In funtional programming, are functions that have no side effects
    and always return the same output given the same input. Pure Functions are easier
    to reason about test and parallelize. (Zamir, Faisal)
'''

def add(x, y, z):
    return x + y + z

print(add(5,3,4))

def full_name(firstName, lastName):
    name = firstName + " " + lastName
    
    return name


firstName = input("Enter you first name: ")
lastName = input("Enter you last name: ")

print(full_name(firstName, lastName))