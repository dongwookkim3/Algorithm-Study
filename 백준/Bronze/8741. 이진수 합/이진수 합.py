import sys
n=int(sys.stdin.readline().rstrip())
n=2**n-1
m=n*(n+1)//2
print(format(m,'b'))