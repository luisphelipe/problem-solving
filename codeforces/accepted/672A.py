#!/usr/bin/python3


# not a clever solution
def main():
    numbers = "" 
    for i in range(1001):
        numbers += str(i)

    num = int(input())
    print(numbers[num])


if __name__ == "__main__": main()
