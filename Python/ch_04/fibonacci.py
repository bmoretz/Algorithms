def bad_fibonacci(n):
    """Return the nth Fibonacci number."""
    if n <= 1:
        return n
    else:
        return bad_fibonacci(n - 2) + bad_fibonacci(n-1)

def fibonacci(n):
    if n <= 1:
        return n
    else:
        fib = []
        for j in range(0, n):
            fib.append(fibonacci(j))
        return fib[-2] + fib[-1]

[bad_fibonacci(k) for k in range(0, 11)]
[fibonacci(k) for k in range(0, 11)]