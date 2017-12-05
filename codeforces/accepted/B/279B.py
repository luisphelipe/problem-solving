n, t = [int(x) for x in input().split()]
numbers = [int(x) for x in input().split()]
_max, atual, p, total = [0, 0, 0, 0]

for time in numbers:
    total += time
    atual += 1

    while total > t:
        total -= numbers[p]
        p += 1
        atual -= 1

    if atual > _max: _max = atual

print(_max)
