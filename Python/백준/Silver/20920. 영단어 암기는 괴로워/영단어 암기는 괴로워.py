import sys
input = sys.stdin.readline

n, a = map(int, input().split())
b = {}
for i in range(n):
  p = input().rstrip()
  if len(p) >= a:
    if p not in b:
      b[p] = 0
    else:
      b[p] += 1

b = sorted(b.items(), key=lambda x: (-x[1], -len(x[0]), x[0]))
for j in range(len(b)):
  print(b[j][0])