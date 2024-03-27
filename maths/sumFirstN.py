from typing import List

def sum_recusively(x, n, sum):
    if x>n:
        return sum
    sum += x
    sum_recusively(x+1, n, sum)


def sumFirstN(n):
    # Write your code here.
    sum = 0
    x = 1
    return sum_recusively(x, n, sum)

