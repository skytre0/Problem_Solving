a, b = map(int, input().split())
x = []
for i in range(a):
  if a % (i+1) == 0:
    x.append(i+1)

x = sorted(x)
if b <= len(x):
  print(x[b-1])
else:
  print(0)