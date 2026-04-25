import sys
input = sys.stdin.readline

n = int(input())
k = []
for i in range(n):
  a = input().rstrip()
  if a[0] == "1": k.append(a.split()[-1])
  elif a[0] == "2":
    if k == []:
      print(-1)
    else:
      print(k.pop())
  elif a[0] == '3':
    print(len(k))
  elif a[0] == '4': print(1 if len(k)<1 else 0)
  else: print(-1 if len(k)<1 else k[-1])