def rec_count(vals):
    """Recursive function to count values."""
    if len(vals) == 0:
        return 0

    return 1 + rec_count(vals[1:])


rec_count([1,2,3,4,5])