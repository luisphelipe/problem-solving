n = int(input())
lista = input()
total = 0
keys = {}

for i in lista:
    if i in keys: keys[i] += 1
    elif i <= "Z":
        if i.lower() in keys: 
            if keys[i.lower()] > 0: keys[i.lower()] -= 1
            else: total += 1
        else: total += 1
    else: keys[i] = 1

print(total)
