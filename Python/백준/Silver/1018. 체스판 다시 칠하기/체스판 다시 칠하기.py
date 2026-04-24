a, b = map(int, input().split())      # 체스판 색칠 확인
x = []
y = []

for _ in range(a):
    x.append(input())

for i in range(a-7):
    for j in range(b-7):
        m = 0
        n = 0
        for p in range(i, i+8):
            for q in range(j, j+8):
                if (p+q) % 2 == 0:
                    if x[p][q] != 'W':
                        m += 1
                    else:
                        n += 1
                else:
                    if x[p][q] != 'B':
                        m += 1
                    else:
                        n += 1
        y.append(min(m, n))

print(min(y))