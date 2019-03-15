# Write a Python class that extends the Progression class so that each value in the 
# progression is the absolute value of the difference between the previous two 
# values. You should include a constructor that accepts a pair of numbers as 
# the first two values, using 2 and 200 as the defaults.

# Import Progression
import sys
sys.path.append('../Progression/')

class ABSProgression(Progression):
    """Iterator producing an arithmetic progression."""

    def __init__(self, increment=1, start=0):
        """Create a new arithmetic progression.

        increment   the fixed constant to add to each term (default 1)
        start       the first term of the progression (default 0)
        """

        super().__init__(start)
        self._increment = increment

    def _advance(self):
        self._current += abs(self._increment)

def main():

    p = ABSProgression(1)

    for n in range(0,-10,-1):
        print('n: {0} value: {1}'.format(n, p.__next__()))

    # next 10
    p.print_progression(10)
    
main()