import sys
input = sys.stdin.readline
n = int(input())
for _ in range(n):
  k = 1
  a, b = map(int, input().split())
  if a > b:
    for i in range(1, b+1, 2):
      if i == 1:
        while a % 2 == b % 2 == 0:
          k *= 2
          a //= 2
          b //= 2
      else:
        while a % i == b % i == 0:
          k *= i
          a //= i
          b //= i
  else:
      for j in range(1, a+1, 2):
        if j == 1:
          while a % 2 == b % 2 == 0:
            k *= 2
            a //= 2
            b //= 2
        else:
          while a % j == b % j == 0:
            k *= j
            a //= j
            b //= j
  print(a*b*k)