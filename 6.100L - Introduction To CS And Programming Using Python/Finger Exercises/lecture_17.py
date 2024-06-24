'''
Write the class according to the specifications below:
'''

class Circle():
    def __init__(self, radius):
        """ Initializes self with radius """
        self.radius = radius

    def get_radius(self):
        """ Returns the radius of self """
        return self.radius

    def set_radius(self, radius):
        """ radius is a number
        Changes the radius of self to radius """
        self.radius = radius

    def get_area(self):
        """ Returns the area of self using pi = 3.14 """
        return (self.radius**2) * 3.14

    def equal(self, c):
        """ c is a Circle object
        Returns True if self and c have the same radius value """
        return (c.radius == self.radius)

    def bigger(self, c):
        """ c is a Circle object
        Returns self or c, the Circle object with the bigger radius """
        if (c.radius > self.radius):
            return c
        elif (c.radius < self.r):
            return self