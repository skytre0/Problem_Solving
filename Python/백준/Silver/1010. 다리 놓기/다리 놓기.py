def pow(a):
  if a == 0:
    return 1
  else:
    while a:
      return a*pow(a-1)

for i in range(int(input())):
  a, b = map(int, input().split())
  print(pow(b)//(pow(a)*pow(b-a)))