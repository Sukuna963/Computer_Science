################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Lambda Functions: A lambda function, also known as an anonymous function, is a small,
    single-expression function that doesn't have a name. Lambda Function can be defined
    inline within expression or passed as arguments to other funtions. (Zamir, Faisal)
'''

firstName = input("Enter with your name: ")
lastName = input("Enter with your name: ")

full_name = lambda f, l: f"Welcome {f} {l}"

print(full_name(firstName, lastName))