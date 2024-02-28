################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Map: In Python, map() is a built-in function that appliesa given function 
    to each element of an iterable and returns a new iterable with the transformed
    values. The map() function is useful for performing operations on all elements
    of a list, tuple or other iterable without having to write a loop. (Zamir, Faisal)
'''

first_list = [1, 2, 3, 4, 5]
second_list = ['mango', 'banana', 'cherry', 'kiwi', 'grape']

# Transform integer in your square number
square_list = list(map(lambda x: x ** 2, first_list))

# Converting strings in a list to uppercase
upper_list = list(map(lambda x: x.upper(), second_list))

# Finding the lengthof each string in a list
len_string = list(map(lambda x: len(x), second_list))

# Using map() with multiple iterables
multiply_lists = list(map(lambda x, y: x * y, len_string, first_list))


print(square_list)
print(upper_list)
print(len_string)
print(multiply_lists)