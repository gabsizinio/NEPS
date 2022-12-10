x = 1
y = 1

while(True):
    x, y = list(map(int, input().split(" ")))
    if x == 0 and y == 0:
        break
    num = input()
    res = ""
    apg = 0
    for i in num:
        while len(res) > 0 and i > res[-1] and apg < y:
            res = res[:-1]
            apg += 1
        
        if len(res) < x - y:
            res = res + i
    
    print(res)
#num = num[:ind] + num[ind + 1:]