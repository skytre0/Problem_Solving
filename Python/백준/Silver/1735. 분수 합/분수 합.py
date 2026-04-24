import sys
input = sys.stdin.readline
a, b = map(int, input().split())
c, d = map(int, input().split())
p, q = (a*d + b*c), b*d
x, y = p, q
if p > q:
  while x % y != 0:
    x, y = y, x%y
else:
  x, y = y, x
  while x % y != 0:
    x, y = y, x%y
print(p//y, q//y)