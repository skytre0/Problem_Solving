import sys
n, m = map(int, sys.stdin.readline().split())
a = []
for i in range(n):
  a.append(i-i)

for i in range(m):
  p, q, r = map(int, sys.stdin.readline().split())
  for k in range(p-1, q):
    if a[k] != r:
      a[k] = r

print(*a)