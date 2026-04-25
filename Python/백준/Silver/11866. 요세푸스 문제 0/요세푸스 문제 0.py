import sys
input = sys.stdin.readline
from collections import deque

a, b = map(int, input().split())
c = deque()
d = []
for i in range(1, a+1):
  c.append(str(i))

while a > 0:
  c.rotate(1-b)
  d.append(c.popleft())
  a -= 1

d = ", ".join(d)
print("<", d, ">", sep="")