t=123456*2
lst=[0,0]+[1]*(t-1)
for i in range(int(t**.5)+1):
    if lst[i]:lst[2*i::i]=[0]*(t//i-1)

def prime(n):
  return print(sum(lst[n+1:2*n+1]))

while 1:
  n=int(input(''))
  if n==0:
    break
  prime(n)