import sys

old = sys.getrecursionlimit()

old
new = old * 100
new

sys.setrecursionlimit(new)