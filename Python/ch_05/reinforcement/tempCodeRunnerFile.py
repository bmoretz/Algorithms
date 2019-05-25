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
