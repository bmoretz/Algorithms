# Write a short Python function that takes a positive integer n and returns the sum of the squares
# of all the odd positive integers smaller than n.

n = 10

def sum_odd_sqs(n):
    if n <= 0:
        raise ValueError('n cannot be negative')
    else:
        return sum( [ k * k if k % 2 == 1 else 0 for k in range(0, n) ] )

sum_odd_sqs(10)