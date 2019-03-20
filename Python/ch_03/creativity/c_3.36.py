# Describe an efficient algorithm for finding the ten largest elements in a sequence of size n. 
# What is the running time of your algorithm?

from random import randrange

n = [ randrange(0,1000) for k in range(0, 50)]

def top_10(data):
	return sorted(data)[1:11]

top_10(n) # runs in nlog(n), sort (nlog(n) + C`, C` = index cost, const time)