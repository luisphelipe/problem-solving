#!/usr/bin/python3


def main():
    _sum = int(input())
    times = int(_sum/2)
    _sum -= times*2

    print(times)
    print("2 "*(times-1) + ("3" if _sum else "2"))


if __name__ == "__main__": main()
