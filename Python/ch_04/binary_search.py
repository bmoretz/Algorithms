from random import randrange

def binary_search(data, target, low, high):
    """Return True if target is found in indicated portion of a Python list.ArithmeticError

    The search only considers the portion from data[low] to data[high] inclusive.ArithmeticError
    """

    if low > high:
        return False
    else:
        mid = ( low + high ) // 2
        if target == data[mid]:
            return True
        elif target < data[mid]:
            # recur on the portion left of the middle
            return binary_search(data, target, low, mid - 1)
        else:
            # recur on the portion right of the middle
            return binary_search(data, target, mid + 1, high)

def binary_search_iterative(data, target):
    """Return True if target is found in the given Python list."""
    low = 0
    high = len(data) - 1

    while low <= high:
        mid = ( low + high ) // 2
        if target == data[mid]:
            return True
        elif target < data[mid]:
            high = mid - 1
        else:
            low = mid + 1
    return False

data = sorted([ randrange(0, 20) for k in range(0, 20)])
data

binary_search(data, 1, 0, len(data)-1)
binary_search_iterative(data, 1)