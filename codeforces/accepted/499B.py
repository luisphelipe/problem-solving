#!/usr/bin/python3


def main():
    res, wds = [int(x) for x in input().split()]
    dic = {}

    for n in range(wds):
        w1, w2 = input().split()
        dic[w1] = w2

    data = input().split()
    for val in data:
        print(val if len(val) <= len(dic[val]) else dic[val], end=" ")


if __name__ == "__main__": main()
