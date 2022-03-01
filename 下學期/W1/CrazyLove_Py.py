pri = []

for i in range(32000):
    pri.append(0)

pri[0] = 1
pri[1] = 1
primes = []
for i in range(2, 32000):
    if not pri[i]:
        primes.append(i)
        j = i+i
        while j < 32000:
            pri[j] = 1
            j += i

n = int(input())

nums = list(map(int, input().split()))

for num in nums:
    isPrime = True
    for p in primes:
        if p >= num:
            break
        elif num%p == 0:
            isPrime = False
            break

    if isPrime:
        print("True")
    else:
        print("False")
