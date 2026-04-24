n = int(input())

for _ in range(n):
  a, b, c = [0, 0, 0, 0], 25, 0
  x = int(input())
  while x:
    a[c] = x//b
    x = x%b
    c += 1
    if b != 5:
      b = b//3 + 2
    else:
      b = 1 
  print(*a)