n = int(input())
lista = []
for i in range(n//2):
    lista.append("*"*(n//2-i) + "D"*(i*2+1) + "*"*(n//2-i))

for i in lista: print(i)
print("D"*n)
for i in list(reversed(lista)): print(i)
