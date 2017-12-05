n = int(input())
board = [['.' for r in range(n)] for c in range(n)]
count = 0

for i in range(n):
    for c in range(i%2, n, 2):
        board[i][c] = 'C'
        count += 1

print(count)
for row in board:
    print("".join(row))
