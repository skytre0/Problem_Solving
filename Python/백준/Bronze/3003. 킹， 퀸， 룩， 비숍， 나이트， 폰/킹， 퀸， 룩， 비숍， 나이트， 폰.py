a = list(input().split())
b = []
for i, k in enumerate(a):
  if i < 2:
    b.append(1 - int(k))
  elif 2 <= i < 5:
    b.append(2 - int(k))
  else:
    b.append(8 - int(k))
print(*b)
