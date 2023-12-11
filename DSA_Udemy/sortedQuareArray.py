################################################################
# Author: Leonardo Marques
# Data Structures Algorithm DSA | Python+Javascript LEETCODE
# Udemy
################################################################

def sorted_squared(array):
    i = 0
    j = len(array) - 1
    square_array = [0] * len(array)
    for x in reversed(range(len(array))):
        sq_i = array[i]**2
        sq_j = array[j]**2
        if sq_i > sq_j:
            square_array[x] = sq_i
            i += 1
        else:
            square_array[x] = sq_j
            j -= 1
    return square_array