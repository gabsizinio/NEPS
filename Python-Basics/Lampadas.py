x = input()
x = int(x)
l1 = 0
l2 = 0
vetor = list(map(int, input().split()))
for i in range(0, x):
    y = vetor[i]
    if y == 1 and l1 == 0:
        l1 = 1
    elif y == 1 and l1 == 1:
        l1 = 0
    elif y == 2 and l1 == 0 and l2 == 0:
        l1 = 1 
        l2 = 1
    elif y == 2 and l1 == 1 and l2 == 0:
        l1 = 0
        l2 = 1
    elif y == 2 and l1 == 0 and l2 == 1:
        l1 = 1
        l2 = 0
    elif y == 2 and l1 == 1 and l2 == 1:
        l1 = 0
        l2 = 0
print(l1)
print(l2)