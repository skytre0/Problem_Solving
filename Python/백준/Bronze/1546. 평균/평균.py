n = int(input())
a = list((map(int, input().split())))
def avg(n, a):
  k = max(a)
  for i in range(n):
    a[i] = a[i] / k * 100
  return a
avg(n, a)
print(sum(a)/n)