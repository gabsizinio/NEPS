x = input()
y1 = list()
y2 = list()
for i in x:
    if(i == "a" or i == "e" or i == "i" or i == "o" or i == "u"):
        y1.append(i)
for con in range(len(x) - 1, -1, -1):
    if(x[con] == "a" or x[con] == "e" or x[con] == "i" or x[con] == "o" or x[con] == "u"):
        y2.append(x[con])

if(y1 == y2):
    print("S")
else:
    print("N")