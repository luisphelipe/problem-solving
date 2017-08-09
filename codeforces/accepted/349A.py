#!/usr/bin/python3


def main():
    n = input()
    data = [int(x) for x in input().split()]
    vc, cq = 0, 0

    for bill in data:
        if bill == 25:
            vc += 1
        elif bill == 50:
            vc -= 1
            cq += 1
        else:
            if cq:
                cq -= 1
                vc -= 1
            else:
                vc -= 3

        if vc < 0 or cq < 0:
            return "NO"

    return "YES"


if __name__ == "__main__": print(main())
