l, r = map(int, input().split())
res = 0

for i in range(l, r + 1):
    res ^= i

print(res)