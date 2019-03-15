# Write a Python class that extends the Progression class so that each value in the 
# progression is the square root of the previous value. 
# (Note that you can no longer represent each value with an integer.) 
# Your constructor should accept an optional parameter specifying the start value, 
# using 65,536 as a default.

# Import Progression
import sys
sys.path.append('../Progression/')

from math import sqrt

class SqrtProgression(Progression):
    """Iterator producing an arithmetic progression."""

    def __init__(self, increment=1, start=65536):
        """Create a new arithmetic progression.

        increment   the fixed constant to add to each term (default 1)
        start       the first term of the progression (default 0)
        """

        super().__init__(start)
        self._prev = start

    def _advance(self):
        self._prev = sqrt(self._prev)
        self._current = self._prev
        
def main():

    p = SqrtProgression(1)

    p.print_progression(10)
    
main()