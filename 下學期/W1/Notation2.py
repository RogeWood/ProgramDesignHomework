import sys

ansList = []
for s in sys.stdin:
    if s == "":
        break
    A, b = map(int, s.split())

    if A == 0:
        print(0)
    else:
        arr = []
        while A > 0:
            num = A % b
            if num < 10:
                arr.append(str(num))
            elif num < 36:
                arr.append(chr(num - 10 + ord('a')))
            else:
                arr.append(chr(num - 36 + ord('A')))
            A = A//b

        arr.reverse()
        print(''.join(arr))
