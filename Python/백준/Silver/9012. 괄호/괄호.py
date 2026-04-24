import sys
input = sys.stdin.readline
n = int(input())
k = 0
while k < n:
  a = input().rstrip()
  p = 0
  q = 0
  if a[0] == ")":
    q += 1
  else:
    p += 1
  for i in a[1:]:
    if q > p:
      break
    elif i == "(":
      p += 1
    else:
      q += 1
  if p == q:
    print("YES")
    k += 1
  else:
    print("NO")
    k += 1