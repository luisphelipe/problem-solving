#!/usr/bin/python3

def main():
    w, s1, s2, p1, p2 = [int(x) for x in input().split()]
    t1 = 2*p1 + s1*w
    t2 = 2*p2 + s2*w

    if (t1 < t2): print("First")
    if (t2 < t1): print("Second")
    if (t1 == t2): print("Friendship")


if __name__ == "__main__": main()

