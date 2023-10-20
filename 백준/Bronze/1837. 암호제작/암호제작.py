n,k = map(int,input().split())
t=0
for i in range(2,k):
    if n%i==0:
        t=i
        break
if t==0:
    print("GOOD")
else :
    print(f"BAD {t}")