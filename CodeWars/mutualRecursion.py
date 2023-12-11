################################################################
# Author: Leonardo Marques
# Codewars: 6 kyu
# Language: python 3.11
################################################################

"""
def f(n): return n - m(f(n-1)) if n else 1

def m(n): return n - f(m(n-1)) if n else 0
"""
def f(n):
    if n == 0:
        return 1
    else:
        return n - m(f(n-1))

def m(n):
    if n == 0:
        return 0
    else:
        return n - f(m(n-1))