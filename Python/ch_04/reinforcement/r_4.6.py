# Describe a recursive function for computing the n th Harmonic number, Hn =∑ n i=1 1/i.

def harmonic(n):
    if n == 1:
        return 1
    else:
        return harmonic(n-1) + 1/n

def harmonic_iterative(n):
    return sum([ 1/k for k in range(1, n+1)])

k = 10

harmonic(k)
harmonic_iterative(k)