#!/usr/bin/python3

def main():
    n, g = [int(x) for x in input().split()]
    data = input()
    dats = set(data)
    
    if (len(dats) <= g): return "NO"

    inicio = []
    final = []

    for val in dats:
        inicio.append(data.index(val))

    dfls = list(dats)
    for end in range(n-1, -1, -1):
        if data[end] in dfls:
            final.append(end)
            dfls.remove(data[end])
        if (not len(dfls)): break
        

    inicio.sort()
    final.sort()

    total = 0
    i, f = 0, 0

    while (i < len(inicio)):
        if (inicio[i] <= final[f]):
            total += 1
            i += 1
        else:
            total -= 1
            f += 1

        if (total > g): return "YES"
    
    return "NO"


if __name__ == "__main__": print(main())

