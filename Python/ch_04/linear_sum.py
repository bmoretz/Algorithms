from random import randrange

def linear_sum(S, n):
    """Return the sum of the first n numbers of sequence S."""
    if n == 0:
        return 0
    else:
        return linear_sum(S, n - 1) + S[n-1]

data = [randrange(0, 10) for k in range(0, 20)]

linear_sum(data, 10)
sum(data[0:10],0)

assert sum(data[0:10],0) == linear_sum(data, 10)
