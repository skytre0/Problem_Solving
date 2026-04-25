def pow(a):
  if a == 0:
    return 1
  else:
    while a:
      return a*pow(a-1)


a, b = map(int, input().split())
print(pow(a)//(pow(b)*pow(a-b)))