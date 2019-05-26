def factI(n):
    """Assumes n an int > 0
        Returns n!"""
    result = 1
    while n > 1:
        result *= n
        n -= 1
    return result

def factR(n):
    """Assumes n an int > 0
        Returns n!"""
    if n == 1:
        return n

    return n * factR( n - 1)


assert factI(5) == factR(5)