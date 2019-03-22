# Describe a recursive function for converting a string of digits into the integer it represents. 
# For example, 13531 represents the integer 13,531.

def convert(n):
    if len(n) <= 3:
        return n
    else:
        return convert(n[:-3]) + "," + n[-3:]

convert("13531")
convert("2312312313531231")
