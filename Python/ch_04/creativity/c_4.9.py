# Write a short recursive Python function that finds the minimum and maximum values 
# in a sequence without using any loops.

from random import randrange

def min_max(n, i = 0, high = 0, low = 0):
    if i == len(n):
        return (low, high)
    else:
        if n[i] < low or i == 0:
            low = n[i]
        elif n[i] > high:
            high = n[i]
        return min_max(n, i+1, high, low)

data = [randrange(0, 100) for k in range(0,11)]

min_max(data)