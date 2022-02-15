import sys

N = int(input())
words = []
for i in range(51):
    words.append([])

for i in range(N):
    new = sys.stdin.readline().strip()
    if new not in words[len(new)]:
        words[len(new)].append(new)


for i in range(51):
    words[i].sort()
    for word in words[i]:
        print(word)