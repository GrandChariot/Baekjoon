import sys

N, M = map(int, sys.stdin.readline().split())

l = list(range(1, N + 1))

def duplication(l1, l2, M):
    if M == 1:
        for num in l1:
            for num2 in l2:
                sys.stdout.write(str(num2) + ' ')
            sys.stdout.write(str(num) + '\n')
    else:
        for num in l1:
            l2_copy = l2[:]
            l2_copy.append(num)
            duplication(l1, l2_copy, M - 1)
    
duplication(l, [], M)