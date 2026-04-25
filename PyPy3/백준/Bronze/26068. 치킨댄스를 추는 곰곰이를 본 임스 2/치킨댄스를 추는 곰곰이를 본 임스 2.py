n = int(input())
sum = 0
while (n):
    a = input()
    a = int(a[2:])
    if (a < 91):
        sum += 1
    n -= 1
print(sum)