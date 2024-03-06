################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Super Keyword: It is typically used within the child class to invoke
    a method that is overridden in the child class but originally defined
    in the parent class. Using super keyword, we can access parent methods 
    that are same with name. Its primary purpose is to provide a way to work 
    with parent classes and their methods and attributes in a child class. (Zamir, Fisal)
'''


# Usage of super() keyword in Python
class Parent:

    def __init__(self):
        print("Hi, I am Constructor of Parent.")

class Child(Parent):

    def __init__(self):
        super().__init__()

child = Child()
child


# Calling the Parent Class Constructor(Initializer)
class Parent:

    def __init__(self, name):
        self.name = name

class Child(Parent):

    def __init__(self, name, age):
        super().__init__(name)
        self.age = age

    def get_child(self):
        return f"{self.name}, {self.age}"

child = Child("JafriCode", 2020)
print(child.get_child())


# Calling Overridden Methods
class Parent:

    def greet(self):
        print("Hello from parent.")

class Child(Parent):

    def greet(self):
        super().greet()
        print("Hello from child.")

child = Child()
child.greet()