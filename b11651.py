import sys
N = int(input())
l = []
for i in range(N):
    new = tuple(map(int, sys.stdin.readline().split()[::-1]))
    l.append(new)

l.sort()

for t in l:
    print(t[1], t[0])