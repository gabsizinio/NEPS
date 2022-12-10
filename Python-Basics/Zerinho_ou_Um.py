A, B, C = input().split()
A = int(A)
B = int(B)
C = int(C)
if A != B and A != C and B == C:
    print("A")
elif B != A and B != C and A == C:
    print("B")
elif C != A and C != B and A == B:
    print("C")
else:
    print("*")