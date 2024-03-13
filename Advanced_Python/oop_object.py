################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Object: Object is an instance of a class. It represents a real-world entity
    with some characteristics(attributes) and behaviors(methods). (Zamir, Faisal)
'''


class Test:
    x = None
    y = None
    z = "Hello"

    def sum(self):
        print(self.x + self.y)


obj = Test()
obj.x = 2
obj.y = 8

print(obj.x)
print(obj.y)
print(obj.z)
obj.sum()