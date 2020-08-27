#!/usr/bin/python3


def productOfTwo(val):
    for i in range(999, 99, -1):
        div = val/i
        if val == i*int(div) and 100 < div < 1000:
            return True
    return False


def main():
    euler = 999*999

    while euler > 10000:
        if str(euler) == str(euler)[::-1] and productOfTwo(euler):
            print(euler)
            break

        euler -= 1


if __name__ == "__main__": main()
