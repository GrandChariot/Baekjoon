N, M = input().split()
N, M = int(N), int(M)
board = []
check = [[0 for j in range(M)] for i in range(N)]
for i in range(N):
    board.append(input())

for i in range(N):
    for j in range(M):
        if i % 2 == j % 2:
            if board[i][j] == 'W':
                check[i][j] = 0
            else:
                check[i][j] = 1
        else:
            if board[i][j] == 'B':
                check[i][j] = 0
            else:
                check[i][j] = 1


min = 64
for i in range(N - 7):
    for j in range(M - 7):
        tot = 0
        for k in range(i, i + 8):
            tot += sum(check[k][j:j+8])
        if (tot < min):
            min = tot
        if (64 - tot < min):
            min = 64 - tot

print(min)