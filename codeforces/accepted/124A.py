#!/usr/bin/python3


def main():
    n, a, b = [int(x) for x in input().split()]
    print(min(n-a, b+1))


if __name__ == "__main__": main()
