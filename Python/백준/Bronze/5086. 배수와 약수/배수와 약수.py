a, b = map(int, input().split())
while a and b != 0:
  if a / b == a // b and a / b > 1:
    print("multiple")
    a, b = map(int, input().split())
  elif b / a == b // a:
    print("factor")
    a, b = map(int, input().split())
  else:
    print("neither")
    a, b = map(int, input().split())