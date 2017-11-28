lista = sorted([int(i) for i in x.split()])
nova = [0] * len(lista)
pot = 0

while 2**pot*2 <= lista[-1]:
    pot += 1

for i in range(len(lista)-1, -1, -1):
    if 2**pot <= lista[i] and pot >= 0: 
        nova[i] = 2**pot
        pot -= 1

npot = 0
for i in range(len(lista)):
    while nova[i]+2**npot <= lista[i] and npot <= pot:
        nova[i] += 2**npot
        npot += 1

    if npot > pot: break

print(sum(nova))
