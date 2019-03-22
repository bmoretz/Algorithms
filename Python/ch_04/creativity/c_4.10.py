# Describe a recursive algorithm to compute the integer part of the base-two logarithm
# of n using only addition and integer division.

def binary_log(n):
    if n < 2:
        return 1
    else:
        return binary_log(n/2) + 1

binary_log(8)