################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Hierarchical Inheritance: A class has more than one subclass.
    This is achieved by defining a superclass, and then defining
    multiple subclasses that inherit from the same superclass. (Zamir, Faisal)
'''


class Parent:

    def parent_method(self):
        print("This is the parent method.")

class Child1(Parent):

    def child1_method(self):
        print("This is the child1 method.")

class Child2(Parent):

    def child2_method(self):
        print("This is the child2 method.")


# Creating an objects
child1 = Child1()
child2 = Child2()

# Calling methods
child1.parent_method()
child1.child1_method()

print("\n")

child2.parent_method()
child2.child2_method()
