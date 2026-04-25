import sys
input = sys.stdin.readline

n = int(input())
k = []
m = 0

for i in range(n):
  a = input().rstrip()
  if a[1] == "u": k.append(a[5:])
  elif a[1] == "o":
    if m +1 > len(k):
      print(-1)
    else:
      print(k[m])
      m += 1
  elif a[1] == "i":
    if m + 1 > len(k):
      print(0)
    else:
      print(len(k)-m)
  elif a[1] == "m":
    if m + 1 > len(k):
      print(1)
    else:
      print(0)
  elif a[1] == "r":
    if m + 1 > len(k):
      print(-1)
    else:
      print(k[m])
  else:
    if m + 1 > len(k):
      print(-1)
    else:
      print(k[-1])