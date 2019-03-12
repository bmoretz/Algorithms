a, b = 4, 28

# Write a short Python function, is multiple(n, m), 
# that takes two integer values and returns True if n is a multiple of m, that is, n = mi 
# for some integer i, and False otherwise.

def is_multiple(n, m):
    return True if n == 1 or m % n == 0 else False

is_multiple(a, b)

if __name__ == "__main__":
    is_multiple(3, 27)