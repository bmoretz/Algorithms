# Graph the functions 8n, 4nlog n, 2n 2 , n 3 , and 2 n using a 
# logarithmic scale for the x- and y-axes; that is, if the function value 
# f(n) is y, plot this as a point with x-coordinate at logn and y-coordinate at logy.

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

plot_func(8*n)
plot_func(4*n*log(n)*n)
plot_func(2*n**2)
plot_func(2*n**3)
plot_func(2**n)

ax.legend()
ax.set_yscale("log", nonposy='clip')

plt.title('Asymptotic Growth')
plt.show()