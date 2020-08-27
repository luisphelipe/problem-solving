fun = lambda n: 0 if n%2 == 1 else (n//4-1 if n%4 == 0 else n//4)
print(fun(int(input())))
