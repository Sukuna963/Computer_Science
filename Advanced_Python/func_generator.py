################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Generator: A generator function is a special type of function that returns an iterator,
    which can be iterated over using the yield keyword. Each time the yield statement is
    encountered, the function's state is saved, and the yielded value is returned.
    The next() function is used to retrieve the next value from the iterator. (Zamir, Faisal)
'''



# number generator
def number_generator(n):
    for i in range(n):
        yield i


n = number_generator(5)


print(next(n))
print(next(n))
print(next(n))
print(next(n))
print(next(n))