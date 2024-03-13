################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Self Keyword: The "self" keyword typically refers to a reference
    to the current instance of a class or object. 
    It is a convention used to refer to the instance of a class within 
    its methods.
    When you define methods within a class, you include "self" as the first
    parameter in the method's definition to represent the instance itself. (Zamir, Faisal)
'''


class MyClass:
    def test(self, value):
        self.value = value

    def print_value(self):
        print(self.value)



obj = MyClass()
obj.test(34)
obj.print_value()