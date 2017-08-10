#!/usr/bin/python3


def main():
    n = input()
    data = [int(x) for x in input().split()]
    _sum = 0
    _min = 10**9

    for value in data:
        _sum += value
        if value%2 and value < _min:
            _min = value
    
    print(_sum-_min if _sum%2 else _sum)


if __name__ == "__main__": main()
