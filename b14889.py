def find_score(human, link, depth, scores, N, score_link, subs):
    if depth == N / 2:
        start = [i for i in range(N)]
        for person in link:
            start.remove(person)
        score_start = 0
        for i in range(depth - 1):
            for j in range(i + 1, depth):
                score_start += scores[start[i]][start[j]]
                score_start += scores[start[j]][start[i]]
        subs.append(abs(score_link - score_start))

    human_copy = human[:]
    for num1 in human:
        link_copy = link[:]
        new_score = score_link
        for num2 in link:
            new_score += scores[num1][num2]
            new_score += scores[num2][num1]
        link_copy.append(num1)
        human_copy.remove(num1)
        find_score(human_copy, link_copy, depth + 1, scores, N, new_score, subs)

N = int(input())
scores = []
for i in range(N):
    scores.append(list(map(int, input().split())))

start = [i for i in range(1, N)]
subs = []

find_score(start, [0], 1, scores, N, 0, subs)

subs.sort()
print(subs[0])