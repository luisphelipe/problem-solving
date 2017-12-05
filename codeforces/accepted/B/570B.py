m, c = [int(x) for x in input().split()]
print((c-1 if c-1 >= m - c else c+1) if m != 1 else 1)
