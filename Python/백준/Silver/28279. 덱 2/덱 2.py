import sys
from collections import deque
input = sys.stdin.readline
n = int(input())
k = deque()

for i in range(n):
  a = input().rstrip()

  if a == "3":
    print(k.popleft() if k else "-1")
  elif a == "4":
    print(k.pop() if k else "-1")
  elif a == "5":
    print(len(k))
  elif a == "6":
    print("0" if k else "1")
  elif a == "7":
    print(k[0] if k else "-1")
  elif a == "8":
    print(k[-1] if k else "-1")
  elif a[0] == "1":
    k.appendleft(a[2:])
  else:
    k.append(a[2:])