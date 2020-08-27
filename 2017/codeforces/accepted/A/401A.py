#!/usr/bin/python3

from math import ceil

def main():
    n, x = [int(x) for x in input().split()]
    _sum = abs(sum([int(x) for x in input().split()]))
    print(ceil(float(_sum)/x))


if __name__ == "__main__": 
    main()
