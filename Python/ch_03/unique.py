# O(N^2)
def unique1(S):
    """Return True if there are no duplicate elements in sequence S."""
    for j in range(len(S)):
        for k in range(j+1, len(S)):
            if S[j] == S[k]:
                return False
    return True

# O(n log(n))
def unique2(S):
    """Return True if there are no duplicate elements in sequence S."""
    temp = sorted(S) # sorting = O(n log n)
    for j in range(1, len(temp)):
        if S[j-1] == S[j]:
            return False
    return True


