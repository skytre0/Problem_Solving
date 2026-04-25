import sys
input = sys.stdin.readline

def recursion(s, l, r):
    if len(s)%2 == 1 and l > r: return 1, l
    elif len(s)%2 == 0 and l > r: return 1, l+1
    elif s[l] != s[r]: return 0, l+1
    else: return recursion(s, l+1, r-1)

def isPalindrome(s):
  if len(s) == 1:
    return 1, 1
  else:
    return recursion(s, 0, len(s)-1)

n = int(input())
for i in range(n):
  a = input().rstrip()
  print(*isPalindrome(a))