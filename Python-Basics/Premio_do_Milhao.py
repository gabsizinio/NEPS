x = input()
x = int(x)
som = 0
res = 0
for i in range(1, x + 1):
    y = input()
    y = int(y)
    som += y
    if som >= 1000000 and res == 0:
        res = i
print(res)
