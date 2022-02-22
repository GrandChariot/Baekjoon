# import sys

# N = int(sys.stdin.readline())
# l = [i for i in range(N)]
# def Queen(l1, l2, num):
#     if num == 0:
#         return 1
#     else:
#         res = 0
#         failed = []
#         for i in range(1, len(l2)):
#             failed.append(l2[-i] + i)
#             failed.append(l2[-i] - i)
#         for i in l1:
#             if i in failed:
#                 continue
#             l1_copy = l1[:]
#             l1_copy.remove(i)
#             res += Queen(l1_copy, l2 + [i], num - 1)
#         return res

# print(Queen(l, [-999], N))

import sys

N = int(sys.stdin.readline())
l = [i for i in range(0, N)]

def Queen(l1, l2, num):
    if num == 1:
        for i in range(1, len(l2)):
            if abs(l1[0] - l2[-i]) == i:
                return 0
        return 1
    else:
        res = 0
        for i in l1:
            for j in range(0, len(l2)):
                if abs(i - l2[-j]) == j:
                    break
                elif j == len(l2) - 1:
                    l1_copy = l1[:]
                    l1_copy.remove(i)
                    res += Queen(l1_copy, l2 + [i], num - 1)
        return res

print(Queen(l, [-999], N))