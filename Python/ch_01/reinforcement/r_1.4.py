# Write a short Python function that takes a positive integer n and returns the sum of the 
# squares of all the positive integers smaller than n.

n = 10

def sum_sqs(n):
    if n <= 0:
        raise ValueError('n cannot be negative')
    else:
        return sum( [ k * k for k in range(0, n) ] )

if __name__ == "__main__":
    sum_sqs(-1)
    sum_sqs(10)