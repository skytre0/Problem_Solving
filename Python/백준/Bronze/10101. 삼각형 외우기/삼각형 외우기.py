y = 0
z = []
for _ in range(3):
  n = int(input())
  if n not in z:
    z.append(n)
  y = y + n

if y != 180:
  print("Error")
elif len(z) == 3:
  print("Scalene")
elif len(z) == 2:
  print("Isosceles")
else:
  print("Equilateral")