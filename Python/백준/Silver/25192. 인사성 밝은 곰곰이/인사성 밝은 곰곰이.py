import sys
input = sys.stdin.readline

n = int(input())
p = {}
q = 0
for i in range(n):
  a = input().rstrip()
  if a == "ENTER":
    p = dict([])
  elif a not in p:
    p[a] = a
    q += 1
print(q)