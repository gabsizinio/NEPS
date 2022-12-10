A, B = input().split()
A = float(A)
B = float(B)
M = (A + B) / 2
if M >= 7:
    print("Aprovado")
elif 4 <= M < 7:
    print("Recuperacao")
else:
    print("Reprovado")