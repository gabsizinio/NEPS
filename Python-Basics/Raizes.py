from math import pow
from math import sqrt
x = input()
x = int(x)
vetor = list(map(float, input().split()))
for i in range(0, x):
    print(f"{sqrt(vetor[i]):.4f}")
