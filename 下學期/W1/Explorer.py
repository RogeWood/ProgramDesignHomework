s = input()

x = 0
y = 0

for c in s:
    if c == 'R':
        x += 1
    elif c == 'L':
        x -= 1
    elif c == 'D':
        y -= 1
    elif c == 'U':
        y += 1
    elif c == 'X' or c == '\0':
        break

print(x, y)
