import sys
n = int(sys.stdin.readline())
a = sys.stdin.readline()
b = 0
for i in range(n):
  b += int(a[i])
print(b)