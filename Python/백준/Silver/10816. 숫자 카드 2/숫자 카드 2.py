import sys
input = sys.stdin.readline
a = int(input())
b = list(map(int, input().split()))
c = int(input())
d = list(map(int, input().split()))

p = {}

for i in b:
  if i in p:
    p[i] += 1
  else:
    p[i] = 1

for j in range(c):
  if d[j] in p:
    print(p[d[j]], end=' ')
  else:
    print(0, end=' ')