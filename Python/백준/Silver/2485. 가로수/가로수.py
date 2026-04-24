import sys
input = sys.stdin.readline
n = int(input())
k = {}
b = 0
for i in range(2):
  k[i] = int(input())
k[n] = k[1] - k[0]

for i in range(2, n):
  k[i] = int(input())
  a = k[n]
  b = k[i] - k[i-1]
  if a > b:
    while a % b != 0:
      a, b = b, a%b
      k[n] = b
  else:
    a, b = b, a
    while a % b != 0:
      a, b = b, a%b
      k[n] = b

print(((k[n-1] - k[0]) // k[n])-(n-1))