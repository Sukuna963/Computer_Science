'''
    Implement the function that meets the specifications below:
'''


def all_true(n, Lf):
    """ n is an int
        Lf is a list of functions that take in an int and return a Boolean
    Returns True if each and every function in Lf returns True when called 
    with n as a parameter. Otherwise returns False. 
    """
    # Your code here
    flag = True
    for lf in Lf:
        if not lf(n):
            flag = False
            break

    return flag


# Examples:    
print(all_true(6, {lambda x: x < 10, lambda x: x % 2 == 0}))  # prints 6
