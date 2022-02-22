import sys

N, M = tuple(map(int, sys.stdin.readline().split()))

l = list(range(1, N + 1))

def combination(l1, l2, M):
    if M == 1:
        for num in l1:
            for num2 in l2:
                sys.stdout.write(str(num2) + ' ')
            sys.stdout.write(str(num) + '\n')
    else:    
        l1_copy = l1[:]
        for num in l1[:-M + 1]:
            l2_copy = l2[:]
            l1_copy.remove(num)
            l2_copy.append(num)
            combination(l1_copy, l2_copy, M - 1)
    
combination(l, [], M)