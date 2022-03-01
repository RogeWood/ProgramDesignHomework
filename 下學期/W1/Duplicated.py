
def compare(a, b):
    return a < b


slist = list(map(str, input().lower().split()))

index = 0
word = []
sum = []
for s in slist:
    appeared = False
    for i in range(index):
        if s == word[i]:
            appeared = True
            sum[i] += 1
            break

    if not appeared:
        skeep = s
        nkeep = 1
        index += 1
        for j in range(index-1):
            if not compare(word[j], skeep):
                ts = word[j]
                word[j] = skeep
                skeep = ts

                tn = sum[j]
                sum[j] = nkeep
                nkeep = tn
        word.append(skeep)
        sum.append(nkeep)

for i in range(index):
    print(word[i], sum[i])

# Never gonna give you up Never gonna let you down Never gonna run around and desert YOU
