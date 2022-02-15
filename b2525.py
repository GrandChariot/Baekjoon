up_flag = 0

hour, min = tuple(map(int, input().split()))
time = int(input())

min_res = min + time
while min_res >= 60:
    up_flag += 1
    min_res -= 60

hour_res = hour + up_flag
if hour_res >= 24:
    hour_res -= 24

print(hour_res, min_res)