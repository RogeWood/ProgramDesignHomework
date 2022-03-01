import numpy

n, m, r = map(int, input().split())

def input_matrix(x):
    A = []
    for i in range(x):
        a = list(map(int, input().split()))
        A.append(a)
    return numpy.array(A)

ma = input_matrix(n)
mb = input_matrix(m)

ans = [[0] * (n+2) for i in range(r + 2)]
ans = ma.dot(mb)
for i in range(n):
    for j in range(r):
        print(str(int(ans[i][j])), end= ' ')
    print()
