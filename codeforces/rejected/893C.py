n, m = [int(x) for x in input().split()]
cost = [int(x) for x in input().split()]

# incomplete solution, ideal route is not necessarily the first.

minimum = 0
for i in range(m):
    a, b = [int(x) for x in input().split()]
    minimum += cost[a-1]
    cost[a-1] = 0
    cost[b-1] = 0

minimum += sum(cost)
print(minimum)
