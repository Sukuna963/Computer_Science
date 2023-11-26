################################################################
# Author: Leonardo Marques
# Data Structures Algorithm DSA | Python+Javascript LEETCODE
# Udemy
################################################################

"""
def rotate_array(array,k):
    if len(array) == 0: return []
    k=k%len(array)
    temp = array[-k:]
    for i in reversed(range(0,len(array)-k)):
        array[i+k]=array[i]
    for i in range(len(temp)):
        array[i]=temp[i]
    return array
"""

def rotate_array(array,k):
    if len(array) != 0:
        if k != 0:
            last_element = array[len(array)-1]
            array.pop()
            
            array.insert(0,last_element)
            
            rotate_array(array, k-1)
        
    return array