A=[1,1]
for i in range(2,700):
    A.append(A[i-1]+A[i-2])
while True:
    a,b=map(int,input().split())
    m=0
    if a==0 and b==0:
        break
    for i in range(1,700):
        if A[i]>=a and A[i]<=b:
            m+=1
    print(m)