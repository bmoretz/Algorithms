# The number of operations executed by algorithms A and B is 40n**2 and 2n**3 , respectively. 
# Determine n0 such that A is better than B for n ≥ n0.

from sympy import symbols, integrate, Rational, lambdify, solve, ln, log, sqrt, diff
import matplotlib.pyplot as plt
import numpy as np

g_xlim = [ 0.1, 25 ]

n = symbols( 'n' )

def plot_func( func ):
	x_vals = np.linspace( g_xlim[0], g_xlim[1], 1000, endpoint=True )
	lam_f = lambdify( n, func, np )
	y_vals = lam_f( x_vals )
	plt.plot( x_vals, y_vals, label = str(func) )

fig = plt.figure()
ax = plt.subplot(111)

A = 40*n**2
B = 2*n**3

plot_func(A)
plot_func(B)

ax.legend()

plt.title('Asymptotic Growth')
plt.show()