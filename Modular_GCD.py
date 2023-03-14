import math
t = int(input())
for i in range(t):
    mod = 1e9+7
    mod = int(mod)
    a = input().split()
    a = [int(i) for i in a]
    p = int((pow(a[0],a[2])))
    q = int((pow(a[1],a[2])))
    p = p%mod
    q = q%mod
    p = (p+q)%mod
    q = a[0] - a[1]
    if p==0 or q==0:
        print(max(p,q))
    else:
        print(math.gcd(p,q))