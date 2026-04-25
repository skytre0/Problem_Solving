import sys
n, x = map(int, sys.stdin.readline().split())
t = list((map(int, sys.stdin.readline().split())))
a = []
for i in range(n):
    if t[i] < x:
        a.append(t[i])
print(*a)