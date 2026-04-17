n = int(input())
arr = list(map(int, input().split()))
k = 1
for i in range(1, n):
    if arr[i] != arr[k-1]:
        arr[k] = arr[i]
        k += 1

for i in range(n):
    if i < k:
        print(arr[i], end=" ")
    else:
        print("_", end=" ")