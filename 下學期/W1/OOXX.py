table = []

for i in range(3):
    a = []
    s = input()
    for c in s:
        a.append(c)
    table.append(a)

on = 0
xn = 0
for i in range(3):
    for j in range(3):
        if table[i][j] == 'O':
            on += 1
        else:
            xn += 1
isCheat = False
if abs(on-xn) != 1:
    isCheat = True

xl = 0
ol = 0

for i in range(3):
    if table[i][0] == table[i][1] and table[i][1] == table[i][2]:
        if table[i][0] == 'O':
            ol += 1
        else:
            xl += 1
    if table[0][i] == table[1][i] and table[1][i] == table[2][i]:
        if table[0][i] == 'X':
            xl += 1
        else:
            ol += 1

if table[1][1] == table[0][0] and table[1][1] == table[2][2]:
    if table[1][1] == 'O':
        ol += 1
    else:
        xl += 1

if table[0][2] == table[1][1] and table[2][0] == table[1][1]:
    if table[1][1] == 'O':
        ol += 1
    else:
        xl += 1

if ol != 0 and xl != 0:
    isCheat = True

if isCheat:
    print("Cheat")
elif xl == 0 and ol == 0:
    print("Tie")
elif ol > xl:
    print("LH win")
else:
    print("YF win")
