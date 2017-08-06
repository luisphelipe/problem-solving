#!/usr/bin/python3


def main():
    n, m = [int(x) for x in input().split()]
    poli = [0]*n

    while m:
        inp = [int(x) for x in input().split()]
        _max = max(inp)
        poli[inp.index(_max)] += 1
        m -= 1

    print(poli.index(max(poli))+1)


if __name__ == "__main__": main()
