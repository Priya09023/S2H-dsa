n = int(input())
arr = list(map(int, input().split()))

print("true" if all(arr[i] >= arr[i-1] for i in range(1, n)) else "false")