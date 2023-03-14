t=int(input());
while t>0:
    t-=1
    n=input()
    n=int(n)
    sum=0
    x=input().split()
    x=[int(i) for i in x]
    for i in x:
        sum+=i
    s=2*sum
    if s%n==0:
        print(s//n)
    else:
        print(0)
