n = int(input())
lista = [int(x) for x in input().split()]

indmin = lista.index(min(lista))
indmax = lista.index(max(lista))

total = indmin - indmax
if n-1 - indmin > total: total = n-1 - indmin
if n-1 - indmax > total: total = n-1 - indmax

if indmin > total: total = indmin
if indmax > total: total = indmax

print(total)
