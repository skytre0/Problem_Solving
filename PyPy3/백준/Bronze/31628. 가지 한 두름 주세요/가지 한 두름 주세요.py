import sys
input = sys.stdin.readline
a = []

for i in range(10):
  a.append(input().rstrip().split())
for j in range(10):
  b = []
  c = []
  for k in range(10):
    if a[j][k] not in b:
      b.append(a[j][k])
    if a[k][j] not in c:
      c.append(a[k][j])
    if len(c) > 1 and len(b) > 1:
      break
  else:
    a = []
    break
if len(a) > 2:
  print(0)
else:
  print(1)