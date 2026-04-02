n = int(input())
arr = list(map(int, input().split()))

total = 1 << n

for num in range(total):
    subset = []
    for i in range(n):
        if num & (1 << i):
            subset.append(arr[i])
    print(subset, end=" ")