n=int(input())
A=input()
m=0
for i in range (n):
   m+=(ord(A[i])-96)*pow(31,i)
   m%=1234567891
print(m)