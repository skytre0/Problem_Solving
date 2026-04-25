import sys
t = int(sys.stdin.readline())
for i in range(t):
  print("Case #" + str(i+1) + ": " + str(sum(map(int,sys.stdin.readline().split()))))