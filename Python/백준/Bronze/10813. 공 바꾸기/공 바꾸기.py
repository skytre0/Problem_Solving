n, m = map(int, input().split())
a = []
for i in range(n):
  a.append(i+1)

for i in range(m):
  p, q = map(int, input().split())
  r = a[p-1]
  a[p-1] = a[q-1]
  a[q-1] = r

print(*a)