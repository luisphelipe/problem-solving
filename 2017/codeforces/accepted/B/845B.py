# get input and split into 2 arrays
num = input()
p1 = [int(x) for x in num[:3]]
p2 = [int(x) for x in num[3:]]

# p1 is array with lesser sum and p2 with greater sum
temp = p1[::] if sum(p1) < sum(p2) else p2[::]
p2 = p2 if sum(p2) >= sum(p1) else p1[::]
p1 = temp

_min = 0
# add to p1 or remove of p2, so the difference go to zero or change signal.
while sum(p1) < sum(p2):
    if 9-min(p1) > max(p2): p1[p1.index(min(p1))] = 9
    else: p2[p2.index(max(p2))] = 0
    _min += 1
       
print(_min)
