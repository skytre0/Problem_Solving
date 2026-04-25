import sys
a = int(sys.stdin.readline())
c = [0] * 10001

for i in range(a):
  c[int(sys.stdin.readline())] += 1
for j in range(10001):
  if c[j] != 0:
    for k in range(c[j]):
      print(j)