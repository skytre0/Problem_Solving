a = int(input())
b = 1
if a == "0":
  print(1)
else:
  while a:
    b *= a
    a -= 1
  print(b)