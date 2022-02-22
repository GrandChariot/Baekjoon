# c++ dividing algorithm
def cdiv(a, b):
    if a < 0:
        return int(-(-a / b))
    else:
        return int(a / b)

# returns max value with numbers and operators
def get_results(numbers, ops, N, depth, current, results):

    if depth == N:
        results.append(current)
    else:
        for i in range(4):
            if ops[i] > 0:
                ops_copy = ops[:]
                ops_copy[i] -= 1
                if i == 0:
                    new = current + numbers[depth]
                elif i == 1:
                    new = current - numbers[depth]
                elif i == 2:
                    new = current * numbers[depth]
                else:
                    new = cdiv(current, numbers[depth])
                get_results(numbers, ops_copy, N, depth + 1, new, results)
            

N = int(input())
numbers = list(map(int, input().split()))
ops = list(map(int, input().split()))

results = []

get_results(numbers, ops, N, 1, numbers[0], results)

results.sort()

print(results[-1])
print(results[0])