
def compare(a, b):
    return a < b


slist = list(map(str, input().lower().split()))

len = 0 # 不同的單字數量
word = [] # 出現的字
sum = [] # 單字出現次數

for s in slist:
    appeared = False
    for i in range(len): #尋找有沒有出現過
        if s == word[i]:
            appeared = True
            sum[i] += 1
            break

    if not appeared: #沒有出現過: 新增單字
        skeep = s
        nkeep = 1
        len += 1
        for j in range(len-1):
            if not compare(word[j], skeep): # 比較字串，將小的留下
                ts = word[j]
                word[j] = skeep
                skeep = ts

                tn = sum[j]
                sum[j] = nkeep
                nkeep = tn
        word.append(skeep)
        sum.append(nkeep)

for i in range(len):
    print(word[i], sum[i])

# Never gonna give you up Never gonna let you down Never gonna run around and desert YOU
