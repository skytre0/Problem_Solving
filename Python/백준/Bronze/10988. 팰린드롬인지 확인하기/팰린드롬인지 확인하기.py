import sys
n = sys.stdin.readline().rstrip()
k = n[::-1]
if n == n[::-1]:
  print(1)
else:
  print(0)