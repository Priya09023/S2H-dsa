s = input().lower()
letters = set()
for ch in s:
    if ch.isalpha():
        letters.add(ch)

print("true" if len(letters) == 26 else "false")