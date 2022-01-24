N = int(input())
cnt = 0
i = 665
while(True):
    i += 1
    if '666' in str(i):
        cnt += 1
    else:
        continue
    if cnt == N:
        print(i)
        break