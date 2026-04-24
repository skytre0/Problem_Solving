import sys
n, m = map(int, sys.stdin.readline().split())
a = list(range(1, n+1))

for i in range(m):
  p, q = map(int, sys.stdin.readline().split())
  a[p-1:q] = a[p-1:q][::-1]

print(*a)