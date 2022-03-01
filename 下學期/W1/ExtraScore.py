import sys

for s in sys.stdin:
    if s == "":
        break
    if s != "\n":
        scores = list(map(int, s.split()))
        sum = 0
        for n in scores:
            sum += n
        print(sum)
# 6 9 420
#
# 74 14
# 214 74 386 47
