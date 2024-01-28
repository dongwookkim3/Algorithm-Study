A=[0,1]
for i in range(2,491):
    A.append(A[i-1]+A[i-2])
while True:
    n=int(input())
    if n==-1:
        break
    print("Hour " + str(n) + ": " + str(A[n]) + " cow(s) affected")