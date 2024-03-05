################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Multi-Level Inheritance: A class inherits from a superclass, which
    in turn inherits from another superclass. (Zamir, Faisal)
'''


class Grandparent:

    def grandparent_method(self):
        print("this is the grandparent method.")

class Parent(Grandparent):

    def parent_method(self):
        print("This is the parent method.")

class Child(Parent):

    def child_method(self):
        print("This is the child method.")


# Creating an object of the Child Class
child = Child()

# Calling methods
child.grandparent_method()
child.parent_method()
child.child_method()