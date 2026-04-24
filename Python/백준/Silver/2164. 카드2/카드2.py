from collections import deque
import sys
input = sys.stdin.readline

a = deque()
for i in range(1, int(input())+1):
  a.append(i)
while len(a) != 1:
  a.popleft()
  a.rotate(-1)
print(*a)