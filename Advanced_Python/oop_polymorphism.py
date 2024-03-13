################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Polymorphism: Polymorphism is a fundamental concept in object-oriented programming
    that allows objects of different classes to be treated as if they are objects of the
    same class. It enables code to work with objects of different types in a uniform 
    way, without needing to know the specific type of the object at runtime. (Zamir, Faisal)

        * Polymorphism different ways:

            - Method Overloading
                + In Python, method Overloading is no supported. However, we can achieve similar
                behavior using default argument values and variable arguments. With method Overloading,
                we can define multiple methods with the same name but with different parameter list.
                When we call a method, the appropriate version of the method is called based on the
                number and types of arguments passed to it. (Zamir, Faisal)

            - Method Overriding
                + Method Overriding is the process if defining a method in a subclass that has the same
                name and paramaters as a method in its superclass. When the method is called on an object
                of the subclass, the version of the method defined in the subclass is executed, rather than
                the version in the superclass. (Zamir, Faisal)
'''


# Method Overloading
class Math:
    
    def add(self, x, y, z=0):
        return x + y + z

math = Math()
print(math.add(1,2))   # 3
print(math.add(1,2,3)) # 6


print("\n")
# Method Overriding
class Animal:

    def speak(self):
        print("Animal speaks.")

class Dog(Animal):

    def speak(self):
        # super().speak()
        print("Dog barks.")

animal = Animal()
animal.speak()

dog = Dog()
dog.speak()