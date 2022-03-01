import numpy as np

n, m, r = map(int, input().split())

A = []
for i in range(n):
    a = list(map(int, input().split()))
    A.append(a)

B = []
for i in range(m):
    b = list(map(int, input().split()))
    B.append(b)

C = [[0] * (n + 2) for _ in range(r + 2)]

A = np.array(A)
B = np.array(B)

C = A.dot(B)
for i in range(n):
    for j in range(r):
        print(str(int(C[i][j])), end = ' ')
    print()
# 2 3 1
# 1 2 3
# 3 2 1
# 1
# 2
# 3
