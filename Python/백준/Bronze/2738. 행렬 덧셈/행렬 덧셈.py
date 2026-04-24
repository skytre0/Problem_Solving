a, b = map(int, input().split())
k = []
for _ in range(a):
  t = (input().split())
  k.append(t)

for i in range(a):
  n = (input().split())
  for x in range(b):
    k[i][x] = int(k[i][x]) + int(n[x])

for y in range(a):
  print(*k[y])