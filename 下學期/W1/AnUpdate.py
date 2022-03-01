table = []

for i in range(26):
    a = []
    for j in range(26):
        a.append((i+j) % 26)
    table.append(a)

s, keys = map(str, input().split())

klen = len(keys)
keyn = []
for key in keys:
    if key >= 'A' and key <= 'Z':
        keyn.append(ord(key) - ord('A'))
    else:
        keyn.append(ord(key) - ord('a'))

index = 0
ans = ""
for c in s:
    if c >= 'A' and c <= 'Z':
        ans += chr(table[ord(c) - ord('A')][keyn[index]] + ord('A'))
    else:
       ans += chr(table[ord(c) - ord('a')][keyn[index]] + ord('a'))
    index = (index+1)%klen


print(ans)
