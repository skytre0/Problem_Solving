a = int(input())
b = 0
c = 0
for i in range(1, a+1):
    b += i
    c += (i * i * i)
print(f"{b}\n{b * b}\n{c}")