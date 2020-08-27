#!/usr/bin/python3


def main():
    n = int(input())
    data = [0]*n
    for i in range(n):
        a, b = [int(x) for x in input().split()]
        data[a-1] = b

    happy = False
    _max = data[0]
    for i in range(1, n):
        if data[i] < _max:
            happy = True
            break
        else:
            _max = data[i]

    print("Happy Alex" if happy else "Poor Alex")


if __name__ == "__main__": main()
