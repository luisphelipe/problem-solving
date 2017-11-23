from math import ceil

r, x, y, t1, t2 = [int(x) for x in input().split()]
x = abs(x-t1)
y = abs(y-t2)
print(ceil(((x**2+y**2)**.5)/(r*2)))
