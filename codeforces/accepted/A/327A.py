#!/usr/bin/python3


def main():
    n = int(input())
    data = [int(i) for i in input().split()]

    flip = [1, 0]
    maxi = sum(data)
    change = False

    for s in range(n):
        atual = sum(data[:s])

        for e in range(s, n):
            atual += flip[data[e]]

            if atual + sum(data[e+1:]) > maxi:
                maxi = atual + sum(data[e+1:])
                change = True

    print(maxi if change else maxi-1)


if __name__ == "__main__": main()
