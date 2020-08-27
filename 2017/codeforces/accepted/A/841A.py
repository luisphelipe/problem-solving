#!/usr/bin/python3


def main():
    n, k = [int(x) for x in input().split()]
    data = input()
    _max = 0

    for val in set(data):
        cnt = data.count(val)
        if cnt > _max:
            _max = cnt

    print("YES" if _max <= k else "NO")


if __name__ == "__main__": main()
