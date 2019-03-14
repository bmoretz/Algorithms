# Give a single command that computes the sum from Exercise R-1.6, relying on Python’s comprehension syntax and the built-in sum function.

n = 10

sum( [ k * k if k % 2 == 1 else 0 for k in range(0, n) ] )
