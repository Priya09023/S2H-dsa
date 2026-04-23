n = int(input())
arr = list(map(int, input().split()))

xor_val = 0

for num in arr:
    xor_val ^= num

print(xor_val)