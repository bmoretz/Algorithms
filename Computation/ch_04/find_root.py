def findRoot(x, power, epsilon):
    """Assumes xx and epsilon int or float, power an int,
        epsilon > 0 & power >= 1
    Returns float y such that y**power is within epsilon x.
        If such a float does exists, it returns None"""

    if x < 0 and power % 2 == 0: # negative number has no even-powered
                                    # roots
        return None

    low = min(-1, x)
    high = max(1, x)  
    ans = (high + low) / 2.0
    while abs(ans**power - x) >= epsilon:
        if ans**power < x:
            low = ans
        else:
            high = ans
        ans = (high + low)/2.0
    return ans

def testFindRoot():
    epsilon = 0.0001
    for x in [.025, -0.25, 2, -2, 8, -8]:
        for power in range(1, 4):
            print('Testing x = ', str(x), 'and power = ', power)
            result = findRoot(x, power, epsilon)
            if result == None:
                print('No root')
            else:
                print('     ', result**power, '~=', x)

testFindRoot()