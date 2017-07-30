#!/usr/bin/python3

def main():
    n, g = [int(x) for x in input().split()]
    data = input()
    doors = [0]*n

    for value in set(data):
        count = data.count(value)
        trig = False
        for i in range(n):
            if data[i] == value:
                trig = True
                count -= 1
            if trig:
                doors[i] += 1
            if not count: 
                break

    print("YES" if max(doors) > g else "NO")

if __name__ == "__main__": main()

