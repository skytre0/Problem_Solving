n = 0
for _ in range(int(input())):
  a = input()
  b = [0] * 26
  b[ord(a[0])-97] += 1
  for i in range(len(a)):
    if i+1 < len(a) and a[i] != a[i+1]:
      b[ord(a[i+1])-97] += 1
  if max(sorted(b)) <= 1:
    n += 1
print(n)