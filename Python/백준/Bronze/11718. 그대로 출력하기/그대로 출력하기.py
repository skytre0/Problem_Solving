import sys
a = 0
while a < 100:
  b = sys.stdin.readline()
  if b != " ":
    print(b.rstrip())
    a += 1
  else:
    break