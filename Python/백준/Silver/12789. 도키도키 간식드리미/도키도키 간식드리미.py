import sys
input = sys.stdin.readline

n = int(input())
m = 1
p = list(map(int, input().rstrip().split()))
q = [n+1]

for i in range(n):
  if p[i] > q[-1] and q[-1] != m:
    print("Sad")
    break
  elif p[i] > q[-1]:
    while q[-1] == m:
      q.pop()
      m += 1
    if p[i] > q[-1]:
      print("Sad")
      break
    elif p[i] == m:
      m += 1
    else:
      q.append(p[i])

  elif p[i] <= q[-1] and p[i] != m:
    q.append(p[i])
  else:
    m += 1
else:
  print('Nice')