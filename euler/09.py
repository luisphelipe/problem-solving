#!/usr/bin/python3


def genc(a, b):
    c = 0

    while(b > c):
        b -= 1
        c += 1
        if a**2 == b**2 + c**2:
            print(a*b*c)
            return True
    return False
 

def main():
    a, b = 0, 1000
    pit = genc(a, b)

    while a < b  and not pit:
        pit = genc(a, b)
        a += 1
        b -= 1


if __name__ == "__main__": main()
