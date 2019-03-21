def reverse(S, start, stop):
    """Reverse elements in implicit slice S[start:stop]."""
    if start < stop - 1:
        S[start], S[stop-1] = S[stop-1], S[start]
        reverse(S, start + 1, stop - 1)

def reverse_iterative(S):
    """Reverse elements in sequence S."""
    start, stop = 0, len(S)
    while start < stop - 1:
        S[start], S[stop-1] = S[stop-1], S[start]
        start, stop = start + 1, stop - 1

k = 16

data = [k for k in range(0, k)]
data

reverse(data, 0, k)
data

reverse_iterative(data)
data