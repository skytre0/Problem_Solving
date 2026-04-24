import sys
m, n = map(int, sys.stdin.readline().split())
a = {}
b = {}

for i in range(0, m):
  k = sys.stdin.readline().rstrip()
  a[i] = k
  b[k] = i

for _ in range(n):
  t = sys.stdin.readline().rstrip()
  if t.isdigit() == True:
    print(a[int(t)-1])
  else:
    print(b[t]+1)