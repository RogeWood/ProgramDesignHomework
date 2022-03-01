import sys

t = int(input())

nl = []
ml = []
pl = []

for i in range(t):
    n = input()
    m = input()
    p = input()
    nl.append(n)
    ml.append(m)
    pl.append(p)

def compare_book(key, name):
    k = key
    n = name
    kl = list(k.lower())
    nl = list(n.lower())
    for i in range(len(key)):
        if kl[i] != nl[i]:
            return False
    return True

case = 1
for s in sys.stdin:
    if s == "":
        break

    s = s.strip()
    notFound = True
    ansIndex = []
    if s.isdigit():
        i = 0
        for m in ml:
            if compare_book(s, m):
                ansIndex.append(i)
                notFound = False
            i += 1
    elif s.isalpha():
        i = 0
        for n in nl:
            if compare_book(s, n):
                ansIndex.append(i)
                notFound = False
            i += 1
    else:
        notFound = True

    print(f'case {case}:')
    if notFound or len(ansIndex) == 0:
        print("NULL")
    else:
        for i in ansIndex:
            print(nl[i])
            print(ml[i])
            print(pl[i])

    case += 1
# 3
# LittlePrince
# 3213546895212354685
# 350
# TheKillingMachineIsOurNeighbor
# 121321549684621694261698421654
# 7890
# THABCDEFGHIJ
# 89876543215689
# 1379
# little
# 1213215
# th
# THABWTF
