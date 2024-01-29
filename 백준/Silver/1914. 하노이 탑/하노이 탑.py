def hanoi(n,a,b,c):
    if n==1:
        print(str(a)+' '+str(c))
    else :
        hanoi(n-1,a,c,b)
        print(str(a)+' '+str(c))
        hanoi(n-1,b,a,c)
n=int(input())
print(pow(2,n)-1)
if n<=20:
    hanoi(n,1,2,3)