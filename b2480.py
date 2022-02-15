a, b, c = tuple(map(int, input().split()))

if a == b and b == c:
    money = 10000 + a * 1000
elif a == b or a == c:
    money = 1000 + a * 100
elif b == c:
    money = 1000 + b * 100
elif a > b and a > c:
    money = 100 * a
elif b > a and b > c:
    money = 100 * b
else:
    money = 100 * c

print(money)