a = int(input())
b = int(input())
c = []
for i in range(a, b+1):
  c.append(i)
if 1 in c:
  c.remove(1)


for i in range(a, b+1):
  d = 0
  for k in range(2, i//2 + 1):
    if i % k == 0:
      d += 1
  if d != 0:
    c.remove(i)

if len(c) == 0:
  print(-1)
else:
  print(sum(c))
  print(min(c))