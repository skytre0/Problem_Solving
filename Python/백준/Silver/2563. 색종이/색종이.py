k = [[0] * 100 for _ in range(100)]   # 1번째 = 세로, 2번째 = 가로 : (i, j) 모양
n = int(input())
for _ in range(n):
  p, q = map(int, input().split())
  for i in range(p, p+10):
    for j in range(q, q+10):
      k[i][j] = 1
a = 0
for r in range(100):
  a += sum(k[r])
print(a)