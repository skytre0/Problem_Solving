import sys
n = int(sys.stdin.readline())
k = set({})
for i in range(n):
  a, b = map(str, sys.stdin.readline().rstrip().split())
  if b == "enter":
    k.add(a)
  else:
    k.remove(a)
k = list(k)
k.sort(reverse=True)
for j in range(len(k)):
  print(k[j])