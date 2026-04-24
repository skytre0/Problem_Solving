import sys
n = int(sys.stdin.readline())
k = []
for i in range(n):
  k.append(list(map(str, sys.stdin.readline().rstrip().split())))
k.sort(key=lambda x: (int(x[0]), x.index(x[1])))
for j in range(n):
  print(*k[j])