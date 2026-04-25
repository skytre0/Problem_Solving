total = int(input())
num = int(input())

def cal(a,b):
  c = a*b
  return c

for i in range(1, num+1):
  a, b = map(int,input().split())
  total -= cal(a, b)

if total == 0:
  print("Yes")
else: 
  print("No")