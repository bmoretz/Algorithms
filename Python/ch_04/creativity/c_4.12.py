# Give a recursive algorithm to compute the product of two positive integers, m and n, 
# using only addition and subtraction.

def multipliy(n, m):
    if n == 1:
        return m
    else:
        return multipliy(n-1, m) + m

multipliy(9, 9)
