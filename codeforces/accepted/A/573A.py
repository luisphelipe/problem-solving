def get_lcm(a, b):
    ab = a*b

    while b != 0:
        t = b
        b = a%b
        a = t

    return int(ab/a)

def check(val):
    while val > 1:
        if val%2 == 0: val //= 2
        elif val%3 == 0: val //= 3
        else: return False
    return True

def main():
    n = int(input())
    bids = [int(x) for x in input().split()]

    lcm = bids[0]
    for i in range(1, n):
        lcm = get_lcm(lcm, bids[i])
        div = lcm//bids[i-1]

        if not check(div):
            return "No"

    if not check(lcm//bids[-1]): return "No"
    else: return "Yes"

print(main())
