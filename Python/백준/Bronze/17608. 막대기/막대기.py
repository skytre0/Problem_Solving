import sys
input = sys.stdin.readline

n = int(input())
p = [0]
q = 0
r = 0
for i in range(n):
  a = int(input())
  p.append(a)
for j in p[::-1]:
  if j > r:
    q += 1
    r = j
print(q)