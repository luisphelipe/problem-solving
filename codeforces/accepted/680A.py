cards = [int(x) for x in input().split()]
cardset = sorted(set(cards))[::-1]
cardcount = [cards.count(x) for x in cardset]
total, maxv = 0, 0

for i in range(len(cardset)):
    total += cardset[i]*cardcount[i]
    if cardcount[i] > 1:
        atual = cardset[i] * (2 if cardcount[i] == 2 else 3)
        if maxv < atual:
            maxv = atual

print(total - maxv)
