#!/usr/bin/python3

"""
Euler Problem 28:
The approach for this problem was understanding how the numbers incresed over time, then just create a programm that replicates that.
"""

def main():
    num = 1
    total = 1

    for i in range(1, 501):
        for a in range(4):
            num += i*2
            total += num
    
    print(total)


if __name__ == "__main__": main()
