while 1:
  a = int(input())
  b = 0
  x = []
  if a == -1:
    break
  for i in range(1, a):
    if a % i == 0:
      b += i
      x.append(i)
      x.append("+")
  if b == a:
    x = x[:-1]
    print(a, '=', *x)
  else:
    print(f'{a} is NOT perfect.')