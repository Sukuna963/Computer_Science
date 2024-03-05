################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Single Inheritance: It refers to a type of inheritance in which a 
    class (the child or derived class) 
    inherits properties and behaviors (attributes and methods) from a 
    single parent class (the base or parent class). (Zamir, Faisal)
'''


class Parent:

    def parent_method(self):
        print("This is the parent method.")


class Child(Parent):

    def child_method(self):
        print("This is the child method.")


# Creating an object of the Child Class
child = Child()

# Calling methods from both the Parent and Child Class
child.parent_method()
child.child_method()