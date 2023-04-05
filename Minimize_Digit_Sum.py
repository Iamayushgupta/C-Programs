def digit_sum(n,x):
    temp=n
    k=0
    while temp>=x:
        k+= (temp%x)
        temp//=x
    k+=(temp%x)

    return k


for _ in range(int(input())):
    bool=True
    n,l,r=map(int,input().split())
    new=[]
    if n>=l and n<=r:
        print(1)
    elif n<l:
        print(n)
    else:
        for j in range(l,r+1):
            if digit_sum(n,j)==1:
                print(j)
                bool=False
                break
            else:
                new.append([digit_sum(n,j),j])
        if bool:
            print(min(new)[1])

