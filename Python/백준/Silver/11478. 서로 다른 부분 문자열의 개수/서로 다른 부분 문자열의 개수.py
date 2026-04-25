import sys
input = sys.stdin.readline
a = input().rstrip()
k = {}
t = 0
for i in range(len(a)):
  for j in range(len(a)-i):
    if a[j:i+j+1] not in k:
      k[a[j:i+j+1]] = t
      t += 1
print(t)