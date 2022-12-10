x = input()
x = int(x)
s1 = input()
s2 = input()
som = 0
for i in range(0, x):
    if s1[i] == s2[i]:
        som += 1
print(som)