import Progression

class FibonacciProgression(Progression):
    """Iterator producing a generalized Fibonacci progression."""

    def __init__(self, first = 0, second = 1):
        """Create a new fibonacci progression.

        first       the first term of the progression (default 0)
        second      the second term of the progression (default 1)
        """

        super().__init__(first)
        self._prev = second - first

    def _advance(self):
        """Update current value by taking sum of previous two."""
        self._prev, self._current = self._current, self._prev + self._current

def main():

    p = FibonacciProgression()

    for n in range(0,10):
        print('n: {0} value: {1}'.format(n, p.__next__()))

    # next 10
    p.print_progression(10)
    
main()