x = int(input())
vetor = list(map(int, input().split()))
vetor.sort()
for i in range(0, x):
    print(f"{vetor[i]} ", end="")
