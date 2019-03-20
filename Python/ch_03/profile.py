from time import time

def profile(func, data):
    """Profile the passed function with input data sets, displaying the actual runtime."""
    for d in data:
        start_time = time()
        result = func(d) # execute the function on the input
        end_time = time()

        elapsed = end_time - start_time
        print('n: {0} execution time: {1}. Result: '.format(len(d), elapsed, result))