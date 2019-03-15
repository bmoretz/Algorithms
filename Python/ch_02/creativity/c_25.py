# Exercise R-2.12 uses the mul method to support multiplying a Vector by a number, while 
# Exercise R-2.14 uses the mul method to support computing a dot product of two vectors. 
# Give a single implementation of Vector. mul that uses run-time type checking to support 
# both syntaxes u v and u k, where u and v designate vector instances and k represents a number.

# (taken from my implementation of Vector)

import Vector

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