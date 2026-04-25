import sys
a, b = map(int, sys.stdin.readline().split())

c = []
for i in range(a):
  c.append(sys.stdin.readline())

d = []
for i in range(b):
  d.append(sys.stdin.readline())

e = 0
for i in range(b):
  if d[i] in c:
    e += 1
print(e)