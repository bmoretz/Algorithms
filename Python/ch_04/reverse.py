def reverse(S, start, stop):
    """Reverse elements in implicit slice S[start:stop]."""
    if start < stop - 1:
        S[start], S[stop-1] = S[stop-1], S[start]
        reverse(S, start + 1, stop - 1)

k = 15

data = [k for k in range(0, k)]
data

reverse(data, 0, k)
data