def sqrt_bisec_d(x, epsilon = 0.01):
    numGuesses = 0
    low = 0
    high = max(1.0, x)
    ans = (high + low) / 2.0
    delta = float('inf')
    while delta >= epsilon:
        print('low = ', low, 'high =', high, 'delta = ', delta, 'ans =', ans)
        numGuesses += 1
        if ans**2 < x:
            low = ans
        else:
            high = ans
        ans = (high + low) / 2.0
        delta = abs(ans**2 - abs(x))

    print('numGuesses =', numGuesses)
    print(ans, 'is close to square root of', x)

def sqrt_bisect(z, tol=1E-12):
    ''' Find the square root of `z` by bisection, with tolerance `tol` '''
    bounds = [0, z]
    while True:
        mid = sum(bounds) / 2.0
        delta = mid * mid - z
        if abs(delta) < tol:
            break
        bounds[delta > 0] = mid

    return mid

x = 25

print('sqrt num', x, 'bisec results', sqrt_bisect(x))
print('sqrt num', x, 'bisec_d result:', sqrt_bisect_d(x))
