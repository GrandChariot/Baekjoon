import sys

N = int(input())
members = []
for i in range(N):
    age, name = sys.stdin.readline().strip().split()
    new = (int(age), i, name)
    members.append(new)

members.sort()

for i in range(N):
    print(members[i][0], members[i][2])