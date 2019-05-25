val1 = "abc"
val2 = "abcd"

def isIn(x, y):
    if x in y or y in x:
        return True
    else:
        return False

print(isIn(val1, val2))
print(isIn(val2, val1))
