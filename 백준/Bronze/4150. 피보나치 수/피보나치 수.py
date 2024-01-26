n=int(input())
A=[0,1,1]
for i in range(3,n+1):
    A.append(A[i-1]+A[i-2])
print(A[n])