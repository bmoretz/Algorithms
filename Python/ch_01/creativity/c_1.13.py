# Write a pseudo-code description of a function that reverses a list of n integers, 
# so that the numbers are listed in the opposite order than they were before,
# and compare this method to an equivalent Python function for doing the same thing.

seq = [ k for k in range(0,10)]

def reverse(data):
    for i in range(len(data) - 1, 0, -1):
        yield data[i]

list(reverse(seq))