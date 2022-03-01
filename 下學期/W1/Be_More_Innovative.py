from decimal import Decimal

a, b, c= map(float, input().split())
d = Decimal(str(a + b))

print(format(d, f'.{int(c)}f'))
