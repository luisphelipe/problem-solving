#!/usr/bin/python3


def main():
    a, b, soma, lim = 0, 1, 0, 4*10**6

    while b < lim:
        if b % 2:
            soma += b

        a, b = b, a+b

    print(soma)


if __name__ == "__main__": main()
