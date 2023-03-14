#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool f=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                f=1;
                break;
            }
        }
        if(f)
        {

        }
    }
}





for _ in range(input()):
    n=input()
    a=[int(i) for i in raw_input().split()]
    r=[a[-1] for i in range(n)]
    l=[a[0] for i in range(n)]
    for i in range(1,n):
        l[i]=l[i-1]^a[i]
        r[n-i-1]=r[n-i]^a[n-i-1]
    flag=0
    for i in range(1,n):
        if l[i-1]==r[i]:
            flag=1
    for i in range(n):
        for j in range(i+2,n):
            if l[i]==r[j] and l[i]==l[j-1]^l[i]:
                flag=1
    if flag:
        print "YES"
    else:
        print "NO"