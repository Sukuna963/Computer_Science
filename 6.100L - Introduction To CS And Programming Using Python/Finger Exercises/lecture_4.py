'''
Assume you are given a positive integer variable named N.
Write a piece of Python code that finds the cube root of N.
The code prints the cube root if N is a perfect cube or it prints error if N is not a perfect cube.
Hint: use a loop that increments a counter—you decide when the counter should stop.
'''

n = int(input("Enter a number: "))
count = 0
cubic = 0
is_cubic = False
while cubic <= n:
    if cubic == n:
        print(f'{n} is a perfect cube')
        is_cubic = True
        break
    count += 1
    cubic = count**3

if not is_cubic:
    print(f'{n} is not perfect cubic')
