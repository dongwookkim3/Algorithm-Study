while True:
    try:
        n=int(input())
        m=1
        i=1
        while m%n!=0:
            m=m*10+1
            i+=1
        print(i)
    except EOFError:
        break