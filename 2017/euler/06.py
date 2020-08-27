#!/usr/bin/python3


def main():
    sqsu = sum([x**2 for x in range(101)])
    susq = sum(range(101))**2

    print(susq-sqsu)


if __name__ == "__main__": main()
