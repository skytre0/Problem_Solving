def pow(a):
  if a == 0:
    return 1
  else:
    while a:
      return a*pow(a-1)

a = int(input())
print(pow(a))