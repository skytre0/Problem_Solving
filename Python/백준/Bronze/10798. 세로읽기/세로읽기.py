import sys
a = []
for _ in range(5):
  k = sys.stdin.readline().rstrip()
  n = 0
  for i in k:
    if len(a) > n:
      a[n] += i
      n += 1
    else:
      a.append(i)
      n += 1
print(*a, sep="")