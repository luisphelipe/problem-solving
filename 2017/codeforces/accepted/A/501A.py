#!/usr/bin/python3


def pt(p, t):
    return max(3*p/10, p-p*t/250) 

def main():
    a, b, c, d = [int(x) for x in input().split()] 
    misha, vasya = pt(a, c), pt(b, d)

    if misha == vasya: print("Tie")
    else: print("Misha" if misha > vasya else "Vasya")


if __name__ == "__main__": main()
