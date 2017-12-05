#!/usr/bin/python3

def main():
    s1 = int(input())
    raw = input()
    data = [0]*10

    for val in raw:
        data[int(val)] += 1

    s2 = 0
    for ind in range(1, 10):
        s2 += data[ind]*ind

    changes = 0;
    q = 0;

    while(s1 > s2):
        if (data[q] > 0):
            data[q] -= 1
            s2 += 9-q
            changes += 1
        else: q += 1

    print(changes)


if __name__ == "__main__": main()

