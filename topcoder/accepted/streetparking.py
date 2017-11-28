road = input()
total = 0

for i in range(len(road)):
    atual = True if road[i] == '-' else False
    s = i-1
    b = i+1

    if atual:
        if s < 0: s += 2
        
        while b <= i+2 and b < len(road): 
            if road[b] == "B": atual = False
            b += 1

        while s <= i+1 and s < len(road):
            if road[s] == "S": atual = False
            s += 2

    if atual: total += 1

print(total)
