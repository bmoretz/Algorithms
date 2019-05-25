"""
In Code Fragment 5.1, we perform an experiment to compare the length of a Python list to its underlying memory usage. Determining the sequence of array sizes requires a manual inspection of the output of that program. Redesign the experiment so that the program outputs only those values of k at which the existing capacity is exhausted. For example, on a system consistent with the results of Code Fragment 5.2, your program should output that the sequence of array capacities are 0, 4, 8, 16, 25, ....
"""

import sys

data = []
n = 27

size = 0

for k in range(n):
    a = len(data)
    b = sys.getsizeof(data)

    if b > size:
        size = b
        print('Length {0:3d}; Size in bytes: {1:4d}'.format(a, b))
    
    data.append(None)
