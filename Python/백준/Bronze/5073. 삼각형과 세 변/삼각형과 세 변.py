while 1:
  [*a] = map(int, input().split())
  a = [*a]
  if sum(a) == 0:
    break
  elif sum(a) - max(a)*2 <= 0:
    print("Invalid")
  elif len(set(a)) == 1:
    print("Equilateral")
  elif len(set(a)) == 2:
    print("Isosceles")
  else:
    print("Scalene")