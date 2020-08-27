#!/usr/bin/python3


def cut(n, a, b):
    if n%a == 0: return n//a
    
    total=0
    while n>0:
        total+=1
        n-=b

        if n>0 and n%a == 0:
            total += n//a
            n = 0

    return (total if n==0 else n)


def main():
    n, a, b, c = [int(x) for x in input().split()]
    a, b, c = sorted([a, b, c])

    cc = 0
    _max_c = 0
    _max = cut(n, a, b)
    while n>0:
        cc += 1
        n -= c
        temp = cut(n, a, b)
        if temp+cc > _max:
            _max_c = cc
            _max = temp

    print(_max_c + _max)

    

if __name__ == "__main__": main()
