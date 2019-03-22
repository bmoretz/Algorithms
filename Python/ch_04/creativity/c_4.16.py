# Write a short recursive Python function that takes a character string s and 
# outputs its reverse. For example, the reverse of pots&pans would be snap&stop .

def reverse(s):
    if len(s) == 0:
        return s
    else:
        return s[-1] + reverse(s[:-1])

reverse("pots&pans")
