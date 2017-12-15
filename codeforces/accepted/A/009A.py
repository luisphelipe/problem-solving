x, y = [int(x) for x in input().split()]
a, b = 7-max(x, y), 6

while a%2 == 0 and b%2 == 0:
    a //= 2
    b //= 2

while a%3 == 0 and b%3 == 0:
    a //= 3
    b //= 3

print("{}/{}".format(a, b))
