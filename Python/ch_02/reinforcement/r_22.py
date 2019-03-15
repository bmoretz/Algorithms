# The collections.Sequence abstract base class does not provide support for comparing 
# two sequences to each other. Modify our Sequence class from Code Fragment 2.14 
# to include a definition for the eq method, so that expression seq1 == seq2 will 
# return True precisely when the two sequences are element by element equivalent.

from abc import ABCMeta, abstractmethod

class Sequence(metaclass=ABCMeta):
    """Our own version of collections.Sequence abstract base class."""

    @abstractmethod
    def __len__(self):
        """Return the length of the sequence."""

    @abstractmethod
    def __getitem__(self, index):
        """Return the element at index j of the sequence."""

    def __contains__(self, val):
        """Return True if val found in the sequence; False otherwise."""

        for j in range(len(self)):
            if self[j] == val:
                return True
        return False

    def index(self, val):
        """Return leftmost index at which val is found (or raise ValueError)."""
        for j in range(len(self)):
            if self[j] == val:
                return j
        raise ValueError('value not in sequence')

    def count(self, val):
        """Return the number of elements equal to given value."""

        k = 0
        for j in range(len(self)):
            if self[j] == val:
                k += 1
        return k

    def __eq__(self, other):

        if len(self) != len(other):
            assert ValueError('dimensions must be the same for equality.')

        equal = True

        for i in range(0, len(self)):
            equal &= self[i] == other[i]

        return equal