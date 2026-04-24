import sys
a, b = sys.stdin.readline().split()
c = 0
for t, i in enumerate(a):
  if str(ord(i)-48) == i:   # 숫자
    c += int(i) * (int(b) ** (len(a)-t-1))
  else:
    c += (ord(i)-55) * (int(b) ** (len(a)-t-1))
print(c)