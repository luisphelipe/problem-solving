#!/usr/bin/python3


def main():
    x1, y1, x2, y2 = [int(x) for x in input().split()]
    dist = abs(x1 - x2)
    dist = abs(y1 - y2) if not dist else dist

    if x1 != x2 and y1 != y2:
        if abs(y1-y2) != abs(x1-x2):
            print("-1")
        else:
            print(x1, y2, x2, y1)

    else:
        if x1 == x2:
            print(x1+dist, y1, x2+dist, y2)
        else:
            print(x1, y1+dist, x2, y2+dist)


if __name__ == "__main__": main()
