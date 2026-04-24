import sys
input = sys.stdin.readline
a, b = map(int, input().split())
n = 0
t = {}
k = []
for i in range(a):
  t[input().rstrip()] = 1

for j in range(b):
  q = input().rstrip()
  if q in t:
    n += 1
    k.append(q)
k.sort()
print(n)
for x in range(n):
  print(k[x])