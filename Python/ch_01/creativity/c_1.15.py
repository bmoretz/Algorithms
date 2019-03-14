# Write a Python function that takes a sequence of numbers and determines if all the numbers
# are different from each other (that is, they are distinct).

from random import randrange

n = 10
seq = [randrange(0,10) for k in range(0,n)]

def is_unique(data):
    n = len(data)
    for i in range(0, n):
        if data[i] in data[i+1:n]:
            return False
        else:
            continue
    return True

is_unique(seq)