a, b = map(int, input().split())
c = int(input())
n = int(input())

if a*n+b <= c*n and c >= a:
  print(1)
else:
  print(0)