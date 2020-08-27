def main():
    possiveis = []
    inp = input()
    for i in range(101): possiveis.append(str(8*i))
    for v in possiveis:
        l = 0
        for c in inp:
            if v[l] == c: l += 1
            if l == len(v):
                print("YES\n{}".format(v))
                return
    print("NO")
main()
