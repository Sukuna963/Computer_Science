'''
Implement the function that meets the specifications below:
'''


def flatten(L):
    """ 
    L: a list 
    Returns a copy of L, which is a flattened version of L 
    """
    new_list = []
    for elem in L:
        if type(elem) == list:
            new_list.extend(flatten(elem))
        else:
            new_list.append(elem)

    return new_list


# Examples:
L = [[1, 4, [6], 2], [[[3]], 2], 4, 5]
print(flatten(L))  # prints the list [1,4,6,2,3,2,4,5]
