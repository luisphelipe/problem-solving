#!/usr/bin/python3


def main():
    exp = int(input())
    data = [8, 4, 2, 6]
    print(data[(exp-1)%4] if exp else 1)


if __name__ == "__main__": main()
