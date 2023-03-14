#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
map <ll,ll> mp;
ll d(ll x)
{
    if(mp[x])
    return mp[x];
    ll cnt=0;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            x/i==i?cnt++:cnt+=2;
        }
    }
    return mp[x]=cnt;
}
int main()
{
    fastio();
    ll a,b,c;
    cin>>a>>b>>c;
    const ll n=1073741824;
    ll sum=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                sum+=d(i*j*k)%n;
            }
        }
    }
    cout<<sum;
}