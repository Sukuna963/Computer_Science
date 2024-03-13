################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Classes: In Python, a class is a blueprint for creating objects, which are
    instances of the class. A class defines the properties and behaviors of objects
    of a particular type.
    Class contain properties(variable) and methods(function) of objects. (Zamir, Faisal)
'''


class Jafri:
    my_data_member = "Hello!"

    def my_member_function(self):
        print("This is my member function.")


class Add:
    x = None
    y = None


    def adding(self):
        self.x = 10
        self.y = 20

        return self.x + self.y


my_object = Jafri()
my_object.my_member_function()
print(my_object.my_data_member)

print('\n')

obj = Add()
print(obj.adding())