n = int(input())
bags = list(range(1, n**2+1))
candy = sum(bags)//n

# needs a function that select n numbers in bag with sum equal of candy
for i in range(1, n+1):
    atual = []

    print(" ".join([str(x) for x in atual]))
