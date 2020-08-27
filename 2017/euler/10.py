#!/usr/bin/python3


def isPrime(val):
    if val < 2:
        return False
    for i in range(2, int(val**.5+1)):
        if not val%i:
            return False
    return True


def sievSum(val):
    data = list(range(val+1))
    data[1] = 0
    for q in range(2, int(val**.5+1)):
        if data[q]:
            w = 2*q
            while w <= val:
                data[w] = 0
                w += q
    
    return sum(data)


def main():
    print(sievSum(2000000)) 


if __name__ == "__main__": main()
