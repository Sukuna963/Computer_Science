################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Inheritance: Inheritance is a key feature of object-oriented programming(OOP) 
    that allows one class to inherit attributes and methods from another class. 
    In Python, inheritance is implemented using the class keyword, and the parent class
    is specified in parentheses after the class name. (Zamir, Faisal)

    Base Class(Parent Class): There is only one parent class from which the child class
    inherits. The parent class defines a set of attributes and methods that can be
    reused by child class. (Zamir, Faisal)

    Child Class(Derived Class): The child class inherits all the attributes and methods
    from the parent class. It can also add its own attributes and methods or override
    the inherited ones to customize the behavior. (Zamir, Faisal) 
'''


class Vehicle:

    def start(self):
        return "The vehicle is starting."

    def stop(self):
        return "The vehicle is stopping."

class Car(Vehicle):                             # Child Class

    def drive(self):
        return "The car is driving."

car = Car()

# Call methods on the child class object
print(car.start())
print(car.drive())
print(car.stop())