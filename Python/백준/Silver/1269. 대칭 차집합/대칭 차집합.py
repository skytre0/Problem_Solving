import sys
input = sys.stdin.readline
[*n] = map(int, input().split())
a = set(map(int, input().split()))
b = set(map(int, input().split()))
k = {0:0}

if n[0] < n[1]:
  a = list(a)
  for p in range(n[0]):
    if a[p] in b:
      k[0] += 1

else:
  b = list(b)
  for q in range(n[1]):
    if b[q] in a:
      k[0] += 1

print(len(a)+len(b)-(2*k[0]))