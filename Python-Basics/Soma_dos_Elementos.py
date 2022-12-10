x = input()
x = int(x)
som = 0
vetor = list(map(int, input().split()))
for i in range(0, x):
    som += vetor[i]
print(som)