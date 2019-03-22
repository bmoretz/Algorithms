# Use recursion to write a Python function for determining if a string s has more vowels than consonants.

def has_more(s):
    if len(s) == 0:
        return 0
    else:
        if s[0] in ['a', 'e', 'i', 'o', 'u']:
            return 1 + has_more(s[1:])
        else:
            return -1 + has_more(s[1:])

has_more("zebrayy")