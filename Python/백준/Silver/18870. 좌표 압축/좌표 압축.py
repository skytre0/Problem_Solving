a = int(input())
b = list(map(int, input().split()))
c = sorted(list(set(b)))
dic = {}
for i in range(len(c)):
  dic[c[i]] = i
for j in b:
  print(dic[j], end=' ')