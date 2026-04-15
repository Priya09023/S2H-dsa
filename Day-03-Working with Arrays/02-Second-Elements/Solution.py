n = int(input())
arr = list(map(int, input().split()))

if n < 2:
    print("-1 -1")
else:
    arr = list(set(arr))
    if len(arr) < 2:
        print("-1 -1")
    else:
        arr.sort()
        print(arr[1], arr[-2])