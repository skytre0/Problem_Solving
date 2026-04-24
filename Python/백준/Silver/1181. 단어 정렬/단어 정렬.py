import sys
n = int(sys.stdin.readline().rstrip())
k = []
for i in range(n):
  k.append(sys.stdin.readline().rstrip())

k = list(set(k))
k.sort()
k.sort(key=lambda x: len(x))

for j in range(len(k)):
  print(k[j])