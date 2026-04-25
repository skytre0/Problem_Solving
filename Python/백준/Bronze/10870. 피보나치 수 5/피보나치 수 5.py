def fibo(a):
  if a == 0:
    return 0
  elif a == 1:
    return 1
  else:
    return fibo(a-1) + fibo(a-2)

a = int(input())
print(fibo(a))