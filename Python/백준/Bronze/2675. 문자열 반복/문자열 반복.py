import sys
n = int(sys.stdin.readline())
for _ in range(n):
  a, b = map(str, sys.stdin.readline().split())
  c = []
  for i in range(len(b)):
    c.append(b[i]*int(a))
  print(*c, sep = "")