import sys
N = int(input())
l = []
for i in range(N):
    new = tuple(map(int, sys.stdin.readline().split()))
    l.append(new)

l.sort()

for t in l:
    print(t[0], t[1])