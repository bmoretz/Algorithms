# 2.9
# Implement the sub method for the Vector class of Section 2.3.3, 
# so that the expression u−v returns a new vector instance representing 
# the difference between two vectors.

# 2.10
# Implement the neg method for the Vector class of Section 2.3.3, so that the 
# expression−v returns a new vector instance whose coordinates are all the 
# negated values of the respective coordinates of v.

class Vector:
    """Represent a vector in a multidimensional space."""

    def __init__(self, d):
        """Create d-dimensional vector of zeros."""
        self._coords = [0] * d
        
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

    def __sub__(self, other):
        """Return the difference of two vectors."""
        if len(self) != len(other): # relies on __len__ method
            raise ValueError('dimensions must agree')

        result = Vector(len(self)) # start with vector of zeros
        
        for j in range(len(self)):
            result[j] = self[j] - other[j]
        return result

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

    total = 0

    for entry in v:
        total += entry

main()