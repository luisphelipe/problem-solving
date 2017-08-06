#!/usr/bin/python3


def main():
    n = int(input())
    cards = [int(x) for x in input().split()]
    pair = sum(cards)/(n/2)
    can = list(range(n))

    for i in range(int(n/2)):
        atual = cards[can[0]]

        for ind in can[1:]:
            if atual + cards[ind] == pair:
                print(can[0]+1, ind+1)
                can.remove(ind)
                break
        
        del can[0]    


if __name__ == "__main__": main()
