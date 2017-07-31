#!/usr/bin/python3

def main():
    n, q, c = [int(i) for i in input().split()]
    plano = [[-1]*101 for i in range(101)]

    for _ in range(n):
        a, b, d = [int(i) for i in input().split()]
        try:
            plano[b][a].append(d)
        except:
            plano[b][a] = [d]


    for _ in range(q):
        t, x1, y1, x2, y2 = [int(i) for i in input().split()]
        atual = 0

        for y in range(y1, y2+1):
            for x in range(x1, x2+1):
                try:
                    for val in plano[y][x]:
                        atual += (val + t) % (c+1)
                except:
                    continue

        print(atual)


if __name__ == "__main__": main()


