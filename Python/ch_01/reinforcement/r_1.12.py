# Python’s random module includes a function choice(data) that returns a random element from a 
# non-empty sequence. The random module includes a more basic function randrange, with 
# parameterization similar to the built-in range function, that return a random choice from
# the given range. 
# 
# Using only the randrange function, implement your own version of the choice function.

from random import choice, randrange

seq = [randrange(0,100) for k in range(0,10)]

choice(seq)

def choice_cus(data):
    return data[randrange(0, len(data))]

choice_cus(seq)

