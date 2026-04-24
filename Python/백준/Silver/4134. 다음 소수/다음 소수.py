import sys
input = sys.stdin.readline
def prime(a):
  if a <= 2:
    return print(2)
  else:
    if a % 2 == 0:
      a += 1
    while 1:
      for j in range(3, int(a ** 0.5)+1, 2):
        if a % j == 0:
          break
      else:
        break
      a += 2
    return print(a)


n = int(input())
k = 1
for i in range(n):
  a = int(input())
  prime(a)