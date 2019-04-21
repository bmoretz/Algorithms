def rec_sum(vals):
    """Recursive Sum Function."""

    if len(vals) == 0:
        return 0

    return vals[0] + rec_sum(vals[1:])


rec_sum([2,4,6])