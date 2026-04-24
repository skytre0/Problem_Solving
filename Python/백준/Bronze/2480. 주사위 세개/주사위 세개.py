a,b,c=sorted(map(str,input().split()))

if a == c:
  print('1'+c+'000')
elif c == b:
  print('1'+c+'00')
elif a == b:
  print('1'+a+'00')
else:
    print(c+'00')