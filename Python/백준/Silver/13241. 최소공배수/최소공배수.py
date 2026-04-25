import sys
input = sys.stdin.readline
a, b = map(int, input().split())
c = 0
p, q = a, b
if a > b:
  while a % b != 0:
    a, b = b, a%b
else:
  a, b = b, a
  while a % b != 0:
    a, b = b, a%b
print(p*q//b)