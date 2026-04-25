a, b, c, d, e, f = map(int, input().split())

if a == 0:
  print("%g %g" %((f-c*e/b)/d, c/b))
elif b == 0:
  print("%g %g" %(c/a, (f-d*c/a)/e))
elif d == 0:
  print("%g %g" %(f/e, (c-b*f/e)/a))
elif e == 0:
  print("%g %g" %(f/d, (c-a*f/d)/b))
else:
  print("%g %g" %((f-c*e/b) / (d-a*e/b), (c - (a * (f-c*e/b) / (d-a*e/b)))/b))