################################################################
# Author: Leonardo Marques
# Codewars: 7 kyu
# Language: python 3.11
################################################################

"""
def noonerize(numbers):
    
    try:
        num1 = int(str(numbers[1])[0] + str(numbers[0])[1:])
        num2 = int(str(numbers[0])[0] + str(numbers[1])[1:])
    except ValueError:
        return "invalid array"
        
    return abs(num1 - num2)
"""

"""
def noonerize(numbers):
    if not all(isinstance(n, int) for n in numbers):
        return 'invalid array'
    a, b = map(str, numbers)
    return abs(int(a[0] + b[1:]) - int(b[0] + a[1:]))
"""

def noonerize(numbers):
    if(isinstance(numbers[0], int) and isinstance(numbers[1], int)):
        if(numbers[0] == numbers[1]):
            return 0
        else:
            return spoonerizes(numbers)
    else:
        return "invalid array"
    pass

def spoonerizes(numbers):
    string_number1 = str(numbers[0])
    string_number2 = str(numbers[1])
    
    result = int(string_number2[0]+string_number1[1:]) - int(string_number1[0]+string_number2[1:])
    return abs(result)