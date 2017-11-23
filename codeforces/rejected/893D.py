def main():
    n, b = [int(x) for x in input().split()]
    depo = [int(x) for x in input().split()]
    total = 0
    used = 0

    for i in range(n):
        total += depo[i]
        if depo[i] == 0 and total < 0:
            used += 1
            total = 0

        if total > b:
            return -1

    return used

print(main())
