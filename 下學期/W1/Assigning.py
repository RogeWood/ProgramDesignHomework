n, q = map(int, input().split())

heigth = list(map(int, input().split()))
heigth.sort()

index = []
for i in range(q):
    a = int(input())
    index.append(a)

for i in index:
    print(heigth[i-1])
