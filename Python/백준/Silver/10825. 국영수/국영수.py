import sys
input = sys.stdin.readline
n = int(input())
k = []
for i in range(n):
  k.append(input().rstrip().split())
k.sort(key=lambda x: (-int(x[1]), int(x[2]), -int(x[3]), x[0]))
for j in range(n):
  print(k[j][0])