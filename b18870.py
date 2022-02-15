import sys

N = int(input())
numbers = sys.stdin.readline().strip().split()
numbers = list(map(int, numbers))

num_set = list(set(numbers))
num_dic = {num : 0 for num in num_set}
num_set.sort()

for i in range(len(num_set)):
    num_dic[num_set[i]] = i
    
for num in numbers:
    print(num_dic[num], end = ' ')

print()