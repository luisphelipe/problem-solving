n = int(input())
dist = [int(x) for x in input().split()]

_min = dist[-1] - dist[0]
removed = dist[1]

for i in range(n-2):
    atual = dist[i+2] - dist[i]

    if atual < _min:
        _min = atual
        removed = dist[i+1]

dist.remove(removed)
_max = dist[1] - dist[0]

for i in range(n-2):
    atual = dist[i+1] - dist[i]

    if _max < atual:
        _max = atual 
    
print(_max)
