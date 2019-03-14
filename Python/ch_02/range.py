class Range:
    """A class that mimic's the built-in range class."""

    def __init__(self, start, stop=None, step=1):
        """Initialize a Range instance."

        Semantics are similar to built-in range class.
        """

        if step == 0:
            raise ValueError('Step cannot be 0')

        if stop is None:    # special case of range(n)
            start, stop = 0, start  #should be treated as if range(0, n)

        # calculate the effective length once
        self._length = max(0, (stop - start + step -1) // step)

        # need knowledge of the start and step (but not stop) to support __getitem__
        self._start = start
        self._step = step

    def __len__(self):
        """Return number of entries in the range."""
        return self._length

    def __getitem__(self, k):
        """Return entry at index k (using standard interpretation if negative)."""
        if k < 0:
            k += len(self)

        if not 0 <= k < self._length:
            raise IndexError('index out of range')

        return self._start + k * self._step

def main():
    r = Range(8, 140, 5)

    print('length: ', r._length)
    print('15th element', r[15])

    assert range(8, 140, 5)[15] == r[15] # verify the same behavior as the built-in version.

main()