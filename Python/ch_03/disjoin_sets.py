from random import randrange
import profile

def disjoin1(A, B, C):
    """Return True if there is no element common to all three lists."""
    for a in A:
        for b in B:
            for c in C:
                if a == b == c: # Common value found
                    return False
    return True


def disjoin2(A, B, C):
    for a in A:
        for b in B:
            if a == b: # only check C if A && B
                for c in C:
                    if a == c: # Common value found
                        return False
    return True


data_1 = [ randrange(0, 100) for k in range(0, 10 * 3)]
data_2 = [ randrange(0, 100) for k in range(0, 10 * 3)]
data_3 = [ randrange(0, 100) for k in range(0, 10 * 3)]

profile(disjoin1, )