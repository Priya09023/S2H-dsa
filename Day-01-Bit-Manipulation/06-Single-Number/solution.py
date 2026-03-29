n = int(input())
res = 0
for x in map(int, input().split()):
    res ^= x
print(res)