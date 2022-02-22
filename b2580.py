import sys

def check_square(board, x, y, not_available):
    x -= x % 3
    y -= y % 3
    for i in range(3):
        for j in range(3):
            not_available.add(board[x + i][y + j])

def check_vertical(board, y, not_available):
    for i in range(9):
        not_available.add(board[i][y])

def find_available(board, x, y):
    not_available = set(board[x])
    check_vertical(board, y, not_available)
    check_square(board, x, y, not_available)
    return list(set([i for i in range(1, 10)]) - not_available)
    
def find_answer(board, empty, depth):
    if depth == len(empty):
        return 1
    x, y = empty[depth]
    available = find_available(board, x, y)
    if available == []:
        # there is no available answer in this option
        return 0
    for num in available:
        board[x][y] = num
        ok = find_answer(board, empty, depth + 1)
        if ok == 1:
            return ok
    # all attempt failed with this option. go up and retry
    board[x][y] = 0 # clean the block
    return 0

board = [0] * 9
for i in range(9):
    board[i] = list(map(int, sys.stdin.readline().split()))
available = [[set([]) for i in range(9)] for j in range(9)]
empty = []

# find available numbers for each empty blocks
for i in range(9):
    for j in range(9):
        if board[i][j] == 0:
            available[i][j] = find_available(board, i, j)
            if len(available[i][j]) == 1:
                # if there is only one answer, put that number to the block
                board[i][j] = available[i][j][0]
            else:
                empty.append((i, j))

# repeat this until nothing changes
flag = 1
while (flag != 0):
    flag = 0
    for i, j in empty:
        if board[i][j] == 0:
            available[i][j] = find_available(board, i, j)
            if len(available[i][j]) == 1:
                board[i][j] = available[i][j][0]
                empty.remove((i, j))
                flag = 1

# now, do something with the rest...
find_answer(board, empty, 0)

for i in range(9):
    for j in range(9):
        print(board[i][j], end = ' ')
    print()