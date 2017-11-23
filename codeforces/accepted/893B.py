def main():
    n = int(input())
    bm = []
    k=2
    while True:
        num = (2**k - 1)*(2**(k-1))
        bm.append(num)
        if num >= n: break
        k += 1

    for i in range(n, 5, -1):
        if n%i == 0 and i in bm:
            return i

    return 1

print(main())
