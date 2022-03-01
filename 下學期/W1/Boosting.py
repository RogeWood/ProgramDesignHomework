import sys

names = []
for s in sys.stdin:
    if s == "":
        break
    names.append(s)

names.sort()

for s in names:
    print(s, end="")
