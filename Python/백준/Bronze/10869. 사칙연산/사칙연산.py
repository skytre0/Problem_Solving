A, B = map(int, input().split())

if A >= 1 and B <= 10000:
  print(A+B,'\n',A-B,'\n',A*B,'\n',A//B,'\n',A%B, sep='')