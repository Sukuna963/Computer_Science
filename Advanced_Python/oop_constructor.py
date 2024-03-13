################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Contructor: Constructor methods (__init__()) is called automatically when an object is created.
        * Types Contructor:
            - Non-Parametrized Constructor
            - Parametrized Constructor

    Destructor: Destructor methods (__del__()) is called automatically when an object is about to be
    destroyed or garbage collected. 
    
    Garbage Collection is the process of automatically freeing up memory that is no longer being
    used by the program. (Zamir, Faisal)
'''


# Non-Parametrized constructor
class MyClass:

    def __init__(self):
        self.my_data_member = None

    def my_member_function(self):
        print("This is my member function")

obj = MyClass()
obj.my_data_member = "Hello, World!"
obj.my_member_function()

print("\n")
# Parametrized contructor
class Car:

    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year


    def get_descriptive(self):
        return f"{self.year} {self.make} {self.model}"


car = Car("Audi", "A4", 2020)
print(car.get_descriptive())

print("\n")
# Destructor
class Person:
    def __init__(self):
        print("A new person has been created!")

    def __del__(self):                                         #Destructor will be always non-parametrized
        print("The person is about to be destroyed!")

    def show(self):
        print("JafriCode")


person = Person()
person.show()