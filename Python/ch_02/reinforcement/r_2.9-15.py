# 2.9
# Implement the sub method for the Vector class of Section 2.3.3, 
# so that the expression u−v returns a new vector instance representing 
# the difference between two vectors.

# 2.10
# Implement the neg method for the Vector class of Section 2.3.3, so that the 
# expression−v returns a new vector instance whose coordinates are all the 
# negated values of the respective coordinates of v.

# 2.11
# In Section 2.3.3, we note that our Vector class supports a syntax such as 
# v = u + [5, 3, 10,−2, 1], in which the sum of a vector and list returns a 
# new vector. However, the syntax v = [5, 3, 10,−2, 1] + u is illegal. 
# Explain how the Vector class definition can be revised so that this syntax 
# generates a new vector.

# A.) implement radd as shown below.

# 2.12
# Implement the mul method for the Vector class of Section 2.3.3, so that the 
# expression v * 3 returns a new vector with coordinates that are 3 times the 
# respective coordinates of v.

# 2.13
# Exercise R-2.12 asks for an implementation of mul , for the Vector class of
# Section 2.3.3, to provide support for the syntax v 3. Implement the rmul method, 
# to provide additional support for syntax 3 * v.

# 2.14
# Implement the mul method for the Vector class of Section 2.3.3, so that the expression u * v 
# returns a scalar that represents the dot product of the vectors, 
# that is, ∑ d i=1 ui · vi .

# 2.15
# The Vector class of Section 2.3.3 provides a constructor that takes an integer d, 
# and produces a d-dimensional vector with all coordinates equal to 0. Another 
# convenient form for creating a new vector would be to send the constructor a 
# parameter that is some iterable type representing a sequence of numbers, and to 
# create a vector with dimension equal to the length of that sequence and coordinates 
# equal to the sequence values. For example, Vector([4, 7, 5]) would produce a 
# three-dimensional vector with coordinates <4, 7, 5>. Modify the constructor so
# that either of these forms is acceptable; that is, if a single integer is sent, 
# it produces a vector of that dimension with all zeros, but if a sequence of numbers 
# is provided, it produces a vector with coordinates based on that sequence.

class Vector:
    """Represent a vector in a multidimensional space."""

    def __init__(self, d):
        """Create d-dimensional vector of zeros."""
        if isinstance(d, (int, float)):
            self._coords = [0] * d
        elif isinstance(d, (list)):
            self._coords = d
        else:
            assert TypeError('Unable to construct from passed in type.')

    def __len__(self):
        """Return the dimensions of the vector."""
        return len(self._coords)

    def __getitem__(self, j):
        """Return jth coordinate of vector."""
        return self._coords[j]

    def __setitem__(self, j, val):
        """Set jth coordinate of vector to given value."""
        self._coords[j] = val

    def __add__(self, other):
        """Return sum of two vectors."""
        if len(self) != len(other): # relies on __len__ method
            raise ValueError('dimensions must agree')

        result = Vector(len(self)) # start with vector of zeros

        for j in range(len(self)):
            result[j] = self[j] + other[j]
        return result

    def __radd__(self, other):
        """Support for adding a list to an existing vector."""
        v = None

        if isinstance(other, (Vector)):
            v = other
        elif isinstance(other, (list)):
            v = Vector(other)
        else:
            raise TypeError('Incompatible types. Unable to perform operation.')

        return self + v

    def __sub__(self, other):
        """Return the difference of two vectors."""
        if len(self) != len(other): # relies on __len__ method
            raise ValueError('dimensions must agree')

        result = Vector(len(self)) # start with vector of zeros
        
        for j in range(len(self)):
            result[j] = self[j] - other[j]
        return result

    def __mul__(self, other):
        """Return the:
        
        scaler product if 'other' is a numeric
        dot product if 'other' is a vector or list

        """
        if isinstance(other, (int, float)):
            return Vector([k * other for k in self])
        elif isinstance(other, list):
            other = Vector(other)
        else:
            assert ValueError('Type not supported')
        
        if len(self) != len(other):
            raise ValueError('dimensions must agree for dot product op.')

        result = Vector((len(self)))
        
        for i in range(0, len(self)):
            result[i] = self[i] * other[i]

        return sum(result)

    def __rmul__(self, other):
        return self * other
       
    def __eq__(self, other):
        """Return True if vector has same coordinates as other."""
        return self._coords == other._coords

    def __ne__(self, other):
        """Return True of vector differs from other."""
        return not self == other # rely on existing __eq__ definition

    def __neg__(self):
        """Return the negation of the current vector."""
        return [k*-1 for k in self._coords]

    def __str__(self):
        """Produce string representation of vector."""
        return '<' + str(self._coords)[1:-1] + '>' # adopt list representation

def main():
    v = Vector(5)
    v[1] = 23
    v[-1] = 45

    print(v[4])

    u = v + v

    print(u)

    z = v - v

    print(z)

    print(-u)

    v = [5, 3, 10,-2, 1] + u

    print(v)

    total = 0

    for entry in v:
        total += entry

def radd_test():
    v = Vector(5)
    v[1] = 23
    v[-1] = 45

    u = [5, 3, 10,-2, 1] + v

    print(u)

def scaler_mul_test():
    v = Vector([5, 3, 10,-2, 1])

    v = v * 3

    print(v)

    u = 3 * v

    print(u)

def dot_prod_test():
    v = Vector([1, 2, 3, 4, 5])
    u = Vector([1, 3, 10,-2, 1])

    z = v * u
    
    print(z)

    assert v * v == 55
    assert Vector([1, 2, 3, 4, 5]) * [1, 2, 3, 4, 5] == 55
    print([1, 2, 3, 4, 5] * Vector([1, 2, 3, 4, 5]))

def constructor_test():
    v = Vector([1, 2, 3])

    print(v)

constructor_test()