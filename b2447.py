def stars(N):
    if N == 3:
        return ['***', '* *', '***']
    else:
        res = []
        temp = stars(N // 3)
        for i in range(3):
            if i == 1:
                for j in range(N // 3):
                    res.append(temp[j] + ' ' * (N // 3) + temp[j])
            else:
                for j in range(N // 3):
                    res.append(temp[j] * 3)
        return res

N = int(input())
res = stars(N)
for i in range(N):
    print(res[i])