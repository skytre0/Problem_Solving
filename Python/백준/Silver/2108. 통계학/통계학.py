import sys
input = sys.stdin.readline

def first(a, b):
  return round(sum(a)/b)

def second(a, b):
    a.sort()
    return a[b//2]
  
def third(a, b):
  a.sort()
  p = [1]
  q = 1
  for i in range(b):
    if i+1 < b and a[i] == a[i+1]:
      q += 1
    else:
      if q > p[0]:
        p = [q, a[i]]
        q = 1
      elif q == p[0]:
        p.append(a[i])
        q = 1
      else:
        q = 1
  if len(p) == 2:
    return p[1]
  else:
    return p[2]

def fourth(a, b):
  return max(a)-min(a)


n = int(input())
k = []
for i in range(n):
  k.append(int(input()))
print(first(k, n))
print(second(k, n))
print(third(k, n))
print(fourth(k, n))