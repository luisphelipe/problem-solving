n = int(input())
dic = {}

for i in range(n):
    key, value = [int(x) for x in input().split()]
    dic[key] = value

neg = []
pos = []

for key in dic:
    if key < 0: neg.append((key, dic[key]))
    else: pos.append((key, dic[key]))

neg = sorted(neg, key=lambda x: x[0], reverse=True)
pos = sorted(pos, key=lambda x: x[0])
neg = [x[1] for x in neg]
pos = [x[1] for x in pos]

minlen = min(len(neg), len(pos))
total = sum(neg[:minlen]) + sum(pos[:minlen])

if len(neg) > minlen: total += neg[minlen]
elif len(pos) > minlen: total += pos[minlen]
print(total)
