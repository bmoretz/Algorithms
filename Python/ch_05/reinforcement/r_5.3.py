"""
Modify the experiment from Code Fragment 5.1 in order to demonstrate that Python’s list class occasionally shrinks the size of its underlying array when elements are popped from a list.
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

for k in range(n):
    a = len(data)
    b = sys.getsizeof(data)

    if b < size:
        size = b
        print('Length {0:3d}; Size in bytes: {1:4d}'.format(a, b))
    
    data.pop()