#!/usr/bin/python3


def main():
    k2, k3, k5, k6 = [int(x) for x in input().split()]
    tfs = min(k2, k5, k6)
    k2 -= tfs
    tt = min(k2, k3)
    print(tfs*256+tt*32)


if __name__ == "__main__": main()
