import sys
a = []
for _ in range(10):
  n = int(sys.stdin.readline())
  if n % 42 not in a:
    a.append(n % 42)
print(len(a))