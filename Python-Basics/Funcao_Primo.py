def eh_primo(x):
    som = 0
    for i in range(x, 0, -1):
        if(x % i == 0):
            som += 1
    if som == 2:
        return True
    else:
        return False

x = int(input())
if eh_primo(x):
    print('S')
else:
    print('N')
