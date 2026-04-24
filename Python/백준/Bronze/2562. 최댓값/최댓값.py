import sys

max = int(sys.stdin.readline())
t = 1
for i in range(8):
    k = int(input())
    if k > max:
        max = k
        t = i+2
        
print(max)
print(t)
