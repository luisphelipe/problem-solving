#!/usr/bin/python3
from math import factorial


"""
This problem is easly solved with permutation with repeated elements equation.
Number of ways we can organize the word "DDRR": 4!/(2!2!)
"""

def main():
    print(factorial(40)/(factorial(20)*factorial(20)))


if __name__ == "__main__": main()
