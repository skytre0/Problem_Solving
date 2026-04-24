[*a] = map(int, open(0).read().split())
print(max(a))
print(*(a.index(max(a)) // 9 + 1, a.index(max(a)) % 9 + 1))