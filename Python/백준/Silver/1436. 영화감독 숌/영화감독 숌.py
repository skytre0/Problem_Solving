n = input()
p = int(n)
q = 0

while p != -1:
  while str(q)[-1] != "6" and p > 0:
    p -= 1
    q += 1
    if n == "1":
      print("666")
      p == -1
    elif p == 0:
      print(str(q-1)+"666")
      p = -1
    elif p == -1:
      break

  if str(q)[-1] == "6":
    k = 0
    for j in range(1, len(str(q))):
      if str(q)[-(j)] == str(q)[-(j+1)] == "6":
        k +=1
    b = "6" * (3+k)
    a = str(q) +"666"
    a = a[0:-(3+k)]
    r = 0
    while r != 10**(k+1) and p >0:
      for c in range(int(b)//(10**(k+1))*(10**(k+1)), (int(b)//(10**(k+1))*(10**(k+1)))+(10**(k+1))):
        p -= 1
        r += 1
        if p == 0:
          print(a+str(c))
          p = -1
          r = 10
          break
    q += 1
  else:
    break