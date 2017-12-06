lista = sorted([int(i) for i in input().split()])
nova = [0] * len(lista)
pot = 0

while 2**pot*2 <= lista[-1]:
    pot += 1

while pot >= 0:
    tem = False
    for i in range(len(lista)-1, -1, -1):
        if nova[i]+2**pot <= lista[i] and pot >= 0: 
            tem = True
            nova[i] += 2**pot
            pot -= 1
    if not tem:
        pot -= 1

print(sum(nova))
