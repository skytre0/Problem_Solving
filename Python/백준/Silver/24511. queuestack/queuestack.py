import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
p = []
for i in range(n):
  if a[i] == 0:
    p.append(b[i])
c = int(input())
d = list(map(int, input().split()))
p = list(reversed(p))
p = p + d
print(*p[:c])