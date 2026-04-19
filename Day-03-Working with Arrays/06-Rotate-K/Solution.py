n = int(input())
arr = list(map(int, input().split()))

k = int(input())
choice = int(input())  

k = k % n

if choice == 2:  
    arr = arr[-k:] + arr[:-k]
else:  
    arr = arr[k:] + arr[:k]

print(*arr)