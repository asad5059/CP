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
        ll a[4],b[2];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        b[0]=max(a[0],a[1]);
        b[1]=max(a[2],a[3]);
        bool f=1;
        if(min(a[0],a[1])>b[0] || min(a[2],a[3])>b[0])
        f=0;
        if(min(a[2],a[3])>b[1] || min(a[0],a[1])>b[1])
        f=0;
        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}