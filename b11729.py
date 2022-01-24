def hanoi_print(n, start, dest):
    if n == 1:
        print(start, dest)
    else:
        mid = 6 - start - dest
        hanoi_print(n - 1, start, mid)
        print(start, dest)
        hanoi_print(n - 1, mid, dest)

n = int(input())
print(2 ** n - 1)
hanoi_print(n, 1, 3)