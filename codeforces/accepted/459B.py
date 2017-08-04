#!/usr/bin/python3


def main():
    n = input()
    data = [int(x) for x in input().split()]
    _min = min(data)
    _max = max(data)

    if _min == _max: print(0, sum(range(data.count(_min))))
    else: print(_max - _min, data.count(_max)*data.count(_min))


if __name__ == "__main__": main()
