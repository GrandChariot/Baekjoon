import sys

N, M = map(int, sys.stdin.readline().split())

l = list(range(1, N + 1))

def duplication2(l1, l2, M):
    if M == 1:
        for num in l1:
            for num2 in l2:
                sys.stdout.write(str(num2) + ' ')
            sys.stdout.write(str(num) + '\n')
    else:
        l1_copy = l1[:]
        for num in l1:
            l2_copy = l2[:]
            l2_copy.append(num)
            duplication2(l1_copy, l2_copy, M - 1)
            l1_copy.remove(num)
    
duplication2(l, [], M)