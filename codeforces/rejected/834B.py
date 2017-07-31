#!/usr/bin/python3

def main():
    n, g = [int(x) for x in input().split()]
    data = input()
    dats = set(data)
    dic = {}

    for val in dats:
        dic[val] = [data.index(val), 0]

        for end in range(n-1, 0, -1):
            if data[end] == val:
                dic[val][1] = end
                break

    inicio = sorted([dic[key][0] for key in dic])
    final = sorted([dic[key][1] for key  in dic])
    
    maximo = 0
    total = 0
    i, f = 0, 0

    while (i < len(inicio)):
        if (inicio[i] <= final[f]):
            total += 1
            i += 1
        else:
            total -= 1
            f += 1

        if total > maximo:
            maximo = total


    print("YES" if maximo > g else "NO")

if __name__ == "__main__": main()

