# Write a short recursive Python function that rearranges a sequence of integer values so that all the
# even values appear before all the odd values.

def int_sort(n, i=0):
    if len(n) == i:
        return n
    else:
        if n[i] % 2 == 0:
            n.insert(0, n[i])
            del n[i+1]
        return int_sort(n, i+1)

data = [k for k in range(0,16)]

int_sort(data)