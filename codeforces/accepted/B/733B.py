n = int(input())
l, r = [], []

for i in range(n):
    a, b = [int(x) for x in input().split()]
    l.append(a)
    r.append(b)

sl, sr = sum(l), sum(r)
score = abs(sl-sr)
maxscore = score
index = 0

for i in range(n):
    atual = abs((sl-l[i]+r[i]) - (sr-r[i]+l[i])) 
    if atual > maxscore:
        maxscore = atual
        index = i+1

print(index)
