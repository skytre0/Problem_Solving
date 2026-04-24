a = input().lower()
b = [0] * 26
c = 0
d = ""
for i in range(len(a)):
  b[ord(a[i])-97] += 1
for i in range(len(b)):
  if max(b) == b[i]:
    c += 1
    d = chr(i+97).upper()
if c == 1:
  print(d)
else:
  print("?")