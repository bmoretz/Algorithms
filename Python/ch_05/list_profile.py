from time import time

def compute_average(n):
    """Perform n apends to an empty list adn return average time elapsed."""
    data = []
    start = time()
    for k in range(n):
        data.append(None)
    end = time()
    return (end - start) / n

for n in range(1, 8):
    n = 10 ** n
    print("N: {0}, avg: {1}", n, compute_average(n))