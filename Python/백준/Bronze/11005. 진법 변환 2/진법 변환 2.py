x, n=map(int, input().split())     # 10진수 n진수로 고치기
a = 0
b = 0
c = [0]
d = []
while x != 0:
  if x < n:
    c[len(c)-a-1] = x
    break
  elif x - (n ** (a+1)) < 0 and x - (n ** a) >= 0:
    while x - (b+1) * (n**(a)) >= 0:
      b += 1
    c[len(c)-a-1] = b
    x -= b*(n ** a)
    a = 0
    b = 0
  else:
    if c[0] == 0:
      c.append(0)
    a += 1
for i in range(len(c)):
  if c[i] > 9:
    d.append(chr(c[i]+55))
  else:
    d.append(c[i])
print(*d, sep='')