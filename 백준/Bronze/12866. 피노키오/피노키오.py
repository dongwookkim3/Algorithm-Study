n=int(input())
A=input()
a=c=g=t=0
for i in range(n):
    if A[i]=='A':
        a+=1
    elif A[i]=='C':
        c+=1
    elif A[i]=='G':
        g+=1
    elif A[i]=='T':
        t+=1
print ((a*c*g*t)%1000000007)