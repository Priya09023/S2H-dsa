n = int(input())
arr1 = list(map(int, input().split()))

m = int(input())
arr2 = list(map(int, input().split()))

i = j = 0
result = []

while i < n and j < m:
    if arr1[i] < arr2[j]:
        if i == 0 or arr1[i] != arr1[i-1]:
            result.append(arr1[i])
        i += 1
    elif arr2[j] < arr1[i]:
        if j == 0 or arr2[j] != arr2[j-1]:
            result.append(arr2[j])
        j += 1
    else:
        if i == 0 or arr1[i] != arr1[i-1]:
            result.append(arr1[i])
        i += 1
        j += 1

while i < n:
    if i == 0 or arr1[i] != arr1[i-1]:
        result.append(arr1[i])
    i += 1

while j < m:
    if j == 0 or arr2[j] != arr2[j-1]:
        result.append(arr2[j])
    j += 1

print(*result)