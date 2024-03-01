################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################


'''
    Filter: In Python, filter() is a built-in function that applies a given function 
    to each element of an iterable and returns new iterable with only the elements that
    satisfy the condition. The filter() function is useful for filtering out unwanted
    elements from a list, tuple or order iterable. (Zamir, Faisal)
'''


first_list = [1, 2, 3, 4, 5]
second_list = ['mango', 'banana', 'cherry', 'kiwi', 'grape']
third_list = [-2, 0, 3, -5, 6]

# Filtering out even numbers from a list
even_list = list(filter(lambda x: x%2==0, first_list))

# Filtering out strings that contain a specific substring
filtered_list = list(filter(lambda x: 'a' in x, second_list))

# Filtering out negative numbers from a list
positive_list = list(filter(lambda x: x >= 0, third_list))

# Using filter() with multiple conditions
filter_list = list(filter(lambda x: x > 2 and x < 5, first_list))


print(even_list)
print(filtered_list)
print(positive_list)
print(filter_list)