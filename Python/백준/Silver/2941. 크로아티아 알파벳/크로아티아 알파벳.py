import sys
n = sys.stdin.readline().rstrip()
a = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
b = 0
for i in range(len(n)):
  if i+1 < len(n):
    if n[i]+n[i+1] in a:
      if n[i-1]+n[i]+n[i+1] in a and i-1 != -1:
        b -= 2
      else:
        b -= 1
b += len(n)
print(b)