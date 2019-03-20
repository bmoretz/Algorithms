import profile

# Runs in O(n^2)
def prefix_average1(S):
    """Return list such that, for all j, A[j] equals average of S[0], ..., S[j]."""

    n = len(S)
    A = [0] * n # allocate space for results

    for j in range(n):
        total = 0 # begin computing S[0] +, ..., + S[j]
        for i in range(j + 1):
            total += S[i]
        A[j] = total / (j+1) # record average
    return A

# Runs in O(n^2)
def prefix_average2(S):
    """Return list such that, for all j, A[j] equals average of S[0], ..., S[j]."""

    n = len(S)
    A = [0] * n # allocate space for results

    for j in range(n):
        A[j] = sum(S[0:j+1]) / (j+1) # record average
    return A


def prefix_average3(S):
    """Return list such that, for all j, A[j] equals average of S[0], ..., S[j]."""

    n = len(S)
    A = [0] * n
    total = 0

    for j in range(n):
        total += S[j]
        A[j] = total / (j+1)
    return A

data_1 = [ k for k in range(0, 10 ** 3)]
data_2 = [ k for k in range(0, 10 ** 4)]
data_3 = [ k for k in range(0, 10 ** 5)]

data_sets = [data_1, data_2, data_3]

profile(prefix_average1, data_sets)
profile(prefix_average2, data_sets)
profile(prefix_average3, data_sets)