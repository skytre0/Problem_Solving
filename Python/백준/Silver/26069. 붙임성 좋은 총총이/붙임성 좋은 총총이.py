n = int(input())
k = {'ChongChong'}
for i in range(n):
  a, b = input().rstrip().split()
  if a in k:
    k.add(b)
  elif b in k:
    k.add(a)
print(len(k))