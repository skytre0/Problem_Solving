import sys
input = sys.stdin.readline

k = [0, 0] + [1] * 999999
t = []
for i in range(2, 1000001):
  if k[i] == 1:
    t.append(i)
    k[i+i::i] = [0]*(1000000//i-1)

n = int(input())
for q in range(n):
  a = int(input())
  print((sum(k[p]*k[a-p] for p in t)+1)//2)