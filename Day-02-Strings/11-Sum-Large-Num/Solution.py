s1 = input()
s2 = input()

i, j = len(s1)-1, len(s2)-1
carry = 0
result = []

while i >= 0 or j >= 0 or carry:
    total = carry

    if i >= 0:
        total += int(s1[i])
        i -= 1
    if j >= 0:
        total += int(s2[j])
        j -= 1

    result.append(str(total % 10))
    carry = total // 10

result = ''.join(result[::-1]).lstrip('0') or '0'
print(result)