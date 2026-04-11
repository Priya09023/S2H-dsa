s1 = input()
s2 = input()

m1, m2 = {}, {}

for a, b in zip(s1, s2):
    if a in m1:
        if m1[a] != b:
            print("false")
            exit()
    else:
        if b in m2:
            print("false")
            exit()
        m1[a] = b
        m2[b] = a

print("true")