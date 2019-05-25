def rec_count(values):
    """Recursive function to count values."""
    if len(values) == 0:
        return 0

    return 1 + rec_count(values[1:])


rec_count([1,2,3,4,5])