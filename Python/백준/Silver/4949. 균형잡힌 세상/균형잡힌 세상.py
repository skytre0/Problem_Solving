import sys
input = sys.stdin.readline
while 1:
  x = input().rstrip()
  if x == ".":
    break
  a = 0
  b = 0
  c = ["0"]
  for i in x:
    if a < 0 or b < 0:
      break
    if i == "(":
      a += 1
      c.append(")")
    elif i == ")":
      if i == c[-1]:
        a -= 1
        c.pop()
      else:
        a -= 1
        break
    elif i == "[":
      b += 1
      c.append("]")
    elif i == "]":
      if i == c[-1]:
        b -= 1
        c.pop()
      else:
        b -= 1
        break
  if a == b == 0 and x[-1] == ".":
    print("yes")
  else:
    print("no")