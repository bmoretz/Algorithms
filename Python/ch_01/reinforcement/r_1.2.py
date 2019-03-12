a = 2

# Write a short Python function, is even(k), that takes an integer value and returns 
# True if k is even, and False otherwise. 
# However, your function cannot use the multiplication, modulo, or division operators.

def is_even(k):
    return k == 0 or bin(k)[-1] == '0'

if __name__ == "__main__":

    assert is_even(0) is True
    assert is_even(1) is False
    assert is_even(2) is True
    assert is_even(3) is False
    assert is_even(4) is True
    assert is_even(10) is True