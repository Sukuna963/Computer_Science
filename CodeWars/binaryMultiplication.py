################################################################
# Author: Leonardo Marques
# Codewars: 6 kyu
# Language: python 3.11
################################################################
"""
def bin_mul(m,n):
    if m < n: return bin_mul(n,m)
    if n == 0: return []
    res = []
    while m > 0:
        if m % 2 == 1: res.append(n)
        m = m//2; n *=2
    return res[::-1]
"""

def bin_log(x, y):
    list = []
    if y != 0:
        while(int(x) > 0):
                if(int(x) % 2 == 0):
                    x = int(x) / 2
                    y = int(y) * 2
                else:
                    list.append(int(y))
                    x = int(x) / 2
                    y = int(y) * 2
                
        list.sort(reverse=True)
    return list

def bin_mul(m, n):
    if n > m:
        return bin_log(n, m)
            
    return bin_log(m,n)