A=[1,1]
for i in range(2,251):
    A.append(A[i-1]+A[i-2]*2)
while True:
    try:
        n=int(input())
        print(A[n]);
    except EOFError:
        break