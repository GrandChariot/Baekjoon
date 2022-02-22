import sys

N, M = tuple(map(int, sys.stdin.readline().split()))

l = list(range(1, N + 1))

def permutation(l1, l2, M):
    if M == 1:
        for num in l1:
            for num2 in l2:
                sys.stdout.write(str(num2) + ' ')
            sys.stdout.write(str(num) + '\n')
    else:
        for num in l1:
            l_copy = l1[:]
            l2_copy = l2[:]
            l_copy.remove(num)
            l2_copy.append(num)
            permutation(l_copy, l2_copy, M - 1)
    
permutation(l, [], M)