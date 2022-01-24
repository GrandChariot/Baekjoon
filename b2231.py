N = int(input())
if N < 55:
    min = 0
else:
    min = N - 54
for i in range(min, N):
    array_i = list(str(i))
    sum = 0
    for j in array_i:
        sum += int(j)
    if sum + i == N:
        print(i)
        break
    if i == N - 1:
        print(0)