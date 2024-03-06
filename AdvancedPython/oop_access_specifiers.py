################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Access Specifiers: access specifiers are a way of controlling the access to attributes
    and methods of a class in object-oriented programming language, define the level of access
    that other classes or objects have to the attributes and methods of a class. (Zamir, Faisal)
        * Different Access Specifiers:

            - Private: By convention, attributes and methods that are intended to be private are named
            with a double leading underscore(__), it can be accessed within class.
            
            - Protected: Attributes and methods that are intended to be protected are named with a single
            leading underscore(_), it can accessed within the class, outside the class and child class.

            - Public: Incase of public, no need to put underscore before data member or method name, it
            can be accessed within the class, outside the class and child class. 
'''


class Person:
    id = 1
    __name = "JafriCode"
    _age = 18

    def get_name(self):
        print(self.__name)

class User(Person):

    def get_info(self):
        print(f"{self.id} {self._age}")


user = User()
user.get_info()

person = Person()
person.get_name()