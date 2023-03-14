#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll k,l,m,n,d,cnt=0,k1=0,l1=0,m1=0,n1=0;
    cin>>k>>l>>m>>n>>d;
    bool f=0;
    for(int i=1;i<=d;i++)
    {
        f=0;
        k1++,l1++,m1++,n1++;
        if(k1==k)
        f=1, k1=0;
        if(m1==m)
        f=1, m1=0;
        if(l1==l)
        f=1,l1=0;
        if(n1==n)
        f=1,n1=0;
        if(f)
        cnt++;
    }
    cout<<cnt;
}