def rec_max(vals):
    """Recursive function to find the max value in a set."""

    if len(vals) == 1:
        return vals

    return vals[0] if vals[0] > vals[1] else rec_max(vals[1:])

rec_max([1,2,3,4,8,3,2,1])