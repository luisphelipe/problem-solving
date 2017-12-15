inp = input()
ln = len(inp)
ls = int(inp[-1])
s = -1
for i in range(ln):
    if int(inp[i]) %2 == 0:
        if int(inp[i]) < ls:
            inp = inp[:i] + inp[-1] + inp[i+1:-1] + inp[i]
            s = -2
            break
        s = i
if s >= 0: inp = inp[:s] + inp[-1] + inp[s+1:-1] + inp[s]
print(s if s == -1 else inp)
