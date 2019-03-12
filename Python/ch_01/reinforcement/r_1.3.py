# Write a short Python function, minmax(data), that takes a sequence of one or more numbers, 
# and returns the smallest and largest numbers, in the form of a tuple of length two. 
# Do not use the built-in functions min or max in implementing your solution.

seq = [ k for k in range(-100, 101) ]

def minmax(data):
    min, max = 0, 0

    for k in data:
        min = k if k < min else min
        max = k if k > max else max
    
    return (min, max)

if __name__ == "__main__":
    minmax(seq)