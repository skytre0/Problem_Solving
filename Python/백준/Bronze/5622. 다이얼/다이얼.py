a = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
s = 0
for i in input():
  for k in range(len(a)):
    if i in a[k]:
      s += k + 3
print(s)