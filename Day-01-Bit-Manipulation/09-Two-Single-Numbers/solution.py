n = int(input())
arr = list(map(int, input().split()))

xr = 0
for num in arr:
    xr ^= num

diff = xr & -xr
x = y = 0

for num in arr:
    if num & diff:
        x ^= num
    else:
        y ^= num

if x > y:
    x, y = y, x

print(x, y)