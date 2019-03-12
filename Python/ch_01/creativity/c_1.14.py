# Write a short Python function that takes a sequence of integer values and determines 
# if there is a distinct pair of numbers in the sequence whose product is odd.

data = [k for k in range(0, 10)]

cross_product = [(a, b) for a in data for b in data]

results = {}

for i in cross_product:
    n = i[0] * i[1]

    if n != 0 and n % 2 == 1:
        if n in results:
            results[n] = results[n] + i
        else:
            results[n] = i

results