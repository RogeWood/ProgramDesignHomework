n, m, x = map(int, input().split())
table = []
scoreTable = []
for i in range(n):
    s = input()
    a = []
    y = []
    for c in s:
        a.append(c)
        y.append(0)
    table.append(a)
    scoreTable.append(y)

y = []
for i in range(m):
    y.append(0)
scoreTable.append(y)

exits = list(map(int, input().split()))

scoreTable[0][x-1] = 1
for i in range(n):
    for j in range(m):
        if scoreTable[i][j] != 0:
            if table[i][j] == 'S':
                scoreTable[i+1][j+1] += scoreTable[i][j]
                scoreTable[i+1][j-1] += scoreTable[i][j]
            elif table[i][j] == 'R':
                scoreTable[i+1][j+1] += scoreTable[i][j]
            else:
                scoreTable[i+1][j-1] += scoreTable[i][j]

sum = 0
for i in range(m):
    sum += exits[i] * scoreTable[n][i]
# 
# for i in scoreTable:
#     print(i)
print(sum)
# 4 5 3
# RLSRL
# RSRSL
# RLRRL
# RRLSL
# 2 3 10 5 7
