n = int(input())
m = list(input().rstrip().split())
p = [i for i in range(1,n+1)]
r = 0
q = [p.pop(r)]
k = int(m.pop(r))

while p:
  if k >= 0:
    r = (r+k-1) % len(p)
  else:
    r = (r+k) % len(p)
  k = int(m.pop(r))
  q += [p.pop(r)]
print(*q)