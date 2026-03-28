start, goal = map(int, input().split())
count = 0

num = start ^ goal

while num > 0:
    if num & 1:
        count += 1
    num >>= 1

print(count)