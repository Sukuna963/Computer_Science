################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Multiple Inheritance: A class inherits from more than one superclass.
    This is achieved by specifying multiple superclass names in parentheses
    separated by commas when defining the subclass. (Zamir, Faisal)
'''


class Parent1:

    def parent1_method(self):
        print("This is the parent1 method.")

class Parent2:

    def parent2_method(self):
        print("This is the parent2 method.")

class Child(Parent1, Parent2):

    def Child_method(self):
        print("This is the child method.")


# Creating an object of the Child Class
child = Child()

# Calling methods from all three classes
child.parent1_method()
child.parent2_method()
child.Child_method()