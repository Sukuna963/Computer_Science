################################################################
# Author: Leonardo Marques
# Data Structures Algorithm DSA | Python+Javascript LEETCODE
# Udemy
################################################################

"""
def max_area(array):
    max_area = 0
    for i in range(len(array)-1):
        for j in range(i+1,len(array)):
            area = min(array[i],array[j])*(j-i)
            max_area = max(max_area,area)
    return max_area

"""

def max_area(array):
    if len(array) == 0: return 0
    x_left = 0
    x_right = len(array)-1
    max_area = 0
    
    while(x_left < x_right):
        area = min(array[x_left], array[x_right]) * (x_right - x_left)
        max_area = max(area, max_area)
        
        if array[x_left] < array[x_right]:
            x_left += 1
        else:
            x_right -= 1
    
    return max_area