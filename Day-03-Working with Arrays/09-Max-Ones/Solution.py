n = int(input())
arr = list(map(int, input().split()))

count = 0
maxCount = 0

for num in arr:
    if num == 1:
        count += 1
        maxCount = max(maxCount, count)
    else:
        count = 0

print(maxCount)