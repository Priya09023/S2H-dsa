n = int(input())
arr = list(map(int, input().split()))

q = int(input())
for _ in range(q):
    l, r = map(int, input().split())
    res = 0
    for i in range(l, r+1):
        res ^= arr[i]
    print(res, end=" ")