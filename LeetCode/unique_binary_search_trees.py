'''
    Mathematics: https://en.wikipedia.org/wiki/Catalan_number

    Given an integer n, return the number of structurally unique BST's (binary search trees)
    which has exactly n nodes of unique values from 1 to n.

    Example 1:

    Input: n = 3
    Output: 5

    Example 2:

    Input: n = 1
    Output: 1
'''


def catalan(number):
    if number <= 1:
        return 1

    nodes = [0] * (number+1)

    nodes[0] = 1
    nodes[1] = 1

    for i in range(2, number+1):
        nodes[i] = 0
        for j in range(0, i):
            nodes[i] += nodes[j] * nodes[i-j-1]

    return nodes[number]


class Solution:
    def numTrees(self, n: int) -> int:
        return catalan(n)
