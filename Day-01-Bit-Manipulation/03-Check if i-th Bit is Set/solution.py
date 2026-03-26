n, i = map(int, input().split())

if n & (1 << i):
    print("True")
else:
    print("False")