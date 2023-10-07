for _ in range (3):
    n=int(input())
    m=0
    for i in range (n):
        a=int(input())
        m+=a
    if m>0:
        print("+")
    elif m<0:
        print("-")
    else :
        print("0")