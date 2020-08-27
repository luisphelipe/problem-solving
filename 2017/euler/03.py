#!/usr/bin/python3


def isPrime(val):
    for i in range(2, int(val**0.5)):
        if not val % i:
            return False
    return True


def main():
    euler = 600851475143
    factor = 1

    while euler > 1:
        factor += 2
        if isPrime(factor) and not euler % factor:
            euler /= factor

    print(factor)


if __name__ == "__main__": main()
