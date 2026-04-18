n = int(input())
arr = list(map(int, input().split()))

first = arr[0]
arr = arr[1:] + [first]

print(*arr)