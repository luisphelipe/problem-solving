#!/usr/bin/python3


def main():
    i = int(input())
    data = [int(d) for d in input().split()]

    if(data[0]%2 + data[-1]%2 + i%2 < 3):
        print("No");
    else:
        print("Yes");


if __name__ == "__main__": main()
