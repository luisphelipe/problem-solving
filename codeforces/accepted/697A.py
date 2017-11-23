#!/usr/bin/python3


def main():
    t, s, x = [int(x) for x in input().split()]

    time = x-t
    if time < s and time != 0: 
        print("NO")
        return
    if time == 0:
        print("YES")
        return
    
    print("YES" if time%s == 0 or time%s == 1 else "NO")


if __name__ == "__main__": main()
