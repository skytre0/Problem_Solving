n = int(input())    # 분수 모양 대각선 왕복 이동
a = 1
while n - (a+1) >= 0:
  n = n - a
  a += 1
if a % 2 != 0:
  print("%d/%d" %(a-n+1, n))
else:
  print(f"{n}/{a-n+1}")