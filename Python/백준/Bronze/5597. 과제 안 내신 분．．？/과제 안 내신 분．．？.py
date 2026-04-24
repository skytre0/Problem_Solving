import sys
a = []
for i in range(30):
  a.append(i+1)
for _ in range(28):
  n = int(sys.stdin.readline())
  a.remove(n)
print(min(a))
print(max(a))