class person:
    def __init__(self, weight, height):
        self.weight = weight
        self.height = height
        self.rank = 1
    
    def __gt__(self, other):
        return self.weight > other.weight and self.height > other.height
        
N = int(input())
people = []

for i in range(N):
    temp = input().split()
    people.append(person(int(temp[0]), int(temp[1])))
    
for i in range(N):
    p1 = people[i]
    for j in range(i + 1, N):
        p2 = people[j]
        if p1 > p2:
            p2.rank += 1
        elif p2 > p1:
            p1.rank += 1
    
    print(p1.rank) 