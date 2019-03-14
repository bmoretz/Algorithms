import Progression

class ArithmeticProgresssion(Progression):
    """Iterator producing an arithmetic progression."""

    def __init__(self, increment=1, start=0):
        """Create a new arithmetic progression.

        increment   the fixed constant to add to each term (default 1)
        start       the first term of the progression (default 0)
        """

        super().__init__(start)
        self._increment = increment

    def _advance(self):
        self._current += self._increment


def main():

    ap = ArithmeticProgresssion(4)

    for n in range(0,10):
        print('n: {0} value: {1}'.format(n, ap.__next__()))

main()