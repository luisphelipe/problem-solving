#!/usr/bin/python3


def main():
    p = int(input())
    ps = [int(x) for x in input().split()]
    j = int(input())
    js = [int(x) for x in input().split()]
    
    worms = [1]*ps[0]
    for i in range(1, p):
        worms.extend([i+1]*ps[i])

    for jw in js:
        print(worms[jw-1])


if __name__ == "__main__": main()
