################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Reduce: In Python, reduce() is a built-in function that applies a given function to the 
    elements of an iterable and returns a single value. The reduce() function is useful for
    performing operations that combine multiple elements of a list, tuple or other iterable. (Zamir, Faisal)
'''


from functools import reduce

int_list = [1, 2, 3, 4, 5]
string_list = ['mango', 'banana', 'cherry', 'kiwi', 'grape']

# Finding the Sum of a list
sum_list = reduce(lambda x, y: x + y, int_list) # (1 + 2 = 3) => (3 + 3 = 6) => (6 + 4 = 10) => (10 + 5 = 15)

# Finding the Sum of a list with initialize number
sum_initialize = reduce(lambda x, y: x + y, int_list, 10) # (10 + 1 = 11) => (11 + 2 = 13) => (13 + 3 = 16) ...

# Finding the Product of a list 
product = reduce(lambda x, y: x * y, int_list)

# Finding the maximum element of a list
maximum = reduce(lambda x, y: x if x > y else y, int_list)

#Combining strings in a list
combined_string = reduce(lambda x, y: f"{x}, {y}", string_list)



print(sum_list)
print(sum_initialize)
print(product)
print(maximum)
print(combined_string)