##################
# 1.1 objects
##################

temperature = 98.6

original = temperature # binds an alias to the value referenced by "temperature"

temperature = temperature + 5 # breaks the alias, as the value is now changed.

# see results
original
temperature

bool()
int()

int(3.14)
int(3.99)

int(-3.9)

int('137')

try:
    int('hello')
except:
    print('Type Error')

try:
    int('7f')
except:
    print('Type Error')

int('7f', 16)

float()

float(2.0)

float('3.14')

##################
# 1.1 collections
##################

example = ['red', 'green', 'blue']

example

a, b = 1, 2

example_2 = [a,b]

list()

data = list('hello')
backup = list(data)

backup

tup = tuple([17,]) # single element tuple
tup

ex1 = str('sample')
ex1

print("""Welcome to the GPA calculator.
Please enter all your letter grades, one per line.
Enter a blank line to designate the end.""")

s1 = set('hello')
s1

d1 = dict({'ga':'Irish', 'de':'German'})
d1

d1['ga']

pairs = [('ga', 'Irish'), ('de', 'German')]
d2 = dict(pairs)
d2

d2['ga']

a, b = 42, 42
a is b

a, b = '42', '42'
a is b

##################
# 1.3 operators
##################

27 / 4

27 / 4 == ( 27 // 4 ) + ( 27 % 4 ) / 4

6 * 4 + 3 == 27

( 27 // -4 ) * (-4) + ( 27 % -4 )

8.2 // 3.14
8.2 % 3.14

data[1:3]
data[0:4:2]

c, d, e = [5, 6, 7], [5, 7], [4, 6]

c < d # index based comparison
c == d
c > d

d > e

5 in c and 5 in d

c <= d # c is a proper subset of d
c >= d # c is not a subset of d

alpha = [1, 2, 3]
beta = alpha
beta += [4, 5]
beta = beta + [6,7]
print(alpha) # note this contains the second beta addition as it effects both aliases

##################
# 1.4 control-flow
##################


j = 0
while j < len(data) and data[j] != 'X':
    j += 1
j

data = [1, 2, 3, 4, 5]

total = 0
for val in data:
    total += val
total

biggest = data[0]
for val in data:
    if val > biggest:
        biggest = val
biggest

big_index = 0
for j in range(len(data)):
    if data[j] > data[big_index]:
        big_index = j
print("largest element '{0}' at index '{1}".format(data[j], j))

##################
# 1.5, functions
##################

def count(data, target):
    n = 0
    for item in data:
        if item == target:
            n += 1
    return n

def contains(data, target):
    for index in range(len(data)):
        if data[index] == target:
            return True
    return False

grades = ['A', 'A', 'B', 'C+']

contains(grades, 'C+')
contains(grades, 'B')

'C+' in grades
'C+' == 'C+'

prizes = count(grades, 'A')
prizes

def scale(data, factor):
    for j in range(len(data)):
        data[j] *= factor
    return data

data = [1, 2, 3, 4, 5]

scale(data, 2)

def compute_gpa(grades, points = { 'A+':4.0, 'A':4.0, 'A-':3.76, 'B+':3.33, 'B':3.0, 'B-':2.67,
            'C+':2.33, 'C':2.0, 'C-':1.67, 'D+':1.33, 'D':1.0, 'F':0.0}):
    
    num_courses = 0
    total_points = 0

    for g in grades:
        if g in points:
            num_courses += 1
            total_points += points[g]
    return total_points / num_courses

compute_gpa(grades)

##################
# 1.5, simple i/o
##################

reply = input('Enter x and y, seperated by spaces:')
pieces = reply.split()

x = float(pieces[0])
x

y = float(pieces[1])
y

age = int(input('Enter your age in years: '))
max_heart_rate = 206.9 - (0.67 * age) # as per Med Sci Sports.
target = 0.65 * max_heart_rate
print('Your target fat-burning heart rate is', target)

##################
# 1.6, files
##################

fp = open('results.txt', 'w')
fp.write('Hello World.\n')

fp = open('results.txt', 'r')
content = fp.readlines()

content

##################
# 1.7, exception handling
##################

raise ValueError('x cannot be negative')

def sqrt(x):
    if not isinstance(x, (int, float)):
        raise TypeError('x must be numeric')
    elif x < 0:
        raise ValueError('x cannot be negative')
    else:
        return 1

def safeDiv(x, y):
    ratio = None
    try:
        ratio = x / y
    except ZeroDivisionError as e:
        print("cannot divide by zero:", e)
    return ratio

safeDiv(4, 0)

try:
    fp = open('sample.txt')
except IOError as e:
    print('Unable to open the file:', e)

age = -1
while age <= 0:
    try:
        age = int(input('Enter your age in years: '))
        if age <= 0:
            print('Your age must be positive')
    except ValueError:
        print('That is an invalid age specification')
    except EOFError:
        print('There was an unexpected error reading input.')
        raise

##################
# 1.8, iterators and generators
##################

# Iterator

data = [1, 2, 4, 8]
i = iter(data)

while True:
    try:
        element = next(i)
        print('element')
    except StopIteration:
        break

# Generator

# loop based
def factors_loop(n):
    results = []
    for k in range(1, n+1):
        if n % k == 0:
            results.append(k)
    return results

factors_loop(100)

def factors_gen(n):
    for k in range(1, n+1):
        if n % k == 0:
            yield k

i = factors_gen(100) # returns an iterable

list(i) # force evaluation

# v2

def factors(n):
    k = 1
    while k * k < n:
        if n % k == 0:
            yield k
            yield n // k
        k += 1
    if k * k == n:
        yield k

i = factors(100)

s = list(i)
s.sort()
s

def fibonacci(max = 1000):
    a, b, future = 0, 1, 0

    while future <= max:
        yield a
        future = a + b
        a = b
        b = future

f = fibonacci()

list(f)

##################
# 1.9, additional conveniences
##################

# ternary operator

x, n = -1, 1

def getParam(n):
    if n >= 0:
        param = n
    else:
        param = -n
    return param

getParam(n)

param = n if n >= 0 else -n

assert getParam(n) == param

# as function arg
getParam( x if x >= 0 else -n )


# traditional syntax

n = 100
squares = []
for k in range(1, n+1):
    squares.append(k*k)

squares

# comprehension syntax

squares = [ k*k for k in range(1, n+1)]
squares

factors = [ k for k in range(1, n+1) if n % k == 0]
factors

[ k for k in range(1, n+1) if n % k == 0] # list comprehension
{ k for k in range(1, n+1) if n % k == 0} # set comprehension
( k for k in range(1, n+1) if n % k == 0) # generator comprehension
{ k : k*k for k in range(1, n+1) if n % k == 0 } # dictionary comprehension

# useful generator

total = sum( k * k for k in range(1, n +1))
total

# explicit tuple (automatic packing)
data = 2, 4, 6, 8
data

# auto unpacking
a, b, c, d = range(7, 11)

(a,b,c,d)

quotient, remainder = divmod(d,a)

(quotient, remainder)

for x, y in [(7,2), (5,8), (6,4)]:
    print("{0} - {1}".format(x,y))

def fibonacci_i(max = 1000):
    a, b = 0, 1
    while b <= max:
        yield b
        a, b = b, a + b 

i = fibonacci_i()

list(i)

##################
# 1.10, first-class objects
##################

scream = print
scream('Hello')

##################
# 1.11, modules
##################

from math import pi, sqrt

sqrt(pi)

import math

math.sqrt(math.pi)

from utility import count

grades = ['A', 'A', 'B', 'C+']
count(grades, 'A')


