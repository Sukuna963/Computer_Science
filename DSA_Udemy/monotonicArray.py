################################################################
# Author: Leonardo Marques
# Data Structures Algorithm DSA | Python+Javascript LEETCODE
# Udemy
################################################################

"""
def monotonic_array(array):
    if len(array) == 0:
        return True
    first = array[0]
    last = array[len(array)-1]
    if first > last:
        for i in range(len(array)-1):
            if array[i] < array[i+1]:
                return False
    elif first == last:
        for i in range(len(array)-1):
            if array[i] != array[i+1]:
                return False
    else:
        for i in range(len(array)-1):
            if array[i] > array[i+1]:
                return False
    return True
    """

def monotonic_array(array):
    x = False
    
    if len(array) == 0 or len(array) == 1:
        x = True
    
    if monotone_increasing(array) == True or monotone_decreasing(array) == True:
        x = True
    
    return x

#In the two functions below, there is the possibility of comparing the first element with the last element for verification          
def monotone_increasing(array):
    mi = False
    for i in range(len(array) - 1):
        if(array[i] <= array[i + 1]):
            mi = True
        else:
            mi = False
            break
                
    return mi
    
def monotone_decreasing(array):
    md = False
    for i in range(len(array) - 1):
        if(array[i] >= array[i + 1]):
            md = True
        else:
            md = False
            break
                
    return md