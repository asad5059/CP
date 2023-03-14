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
ll n,W;
vector <ll> w,v;
map <pair<ll,ll>,ll> mp;
ll knp(ll c,ll i)
{
    if(mp.find({c,i})!=mp.end())
    return mp[{c,i}];
    if(c<=0 || i<=0)
    return 0;
    ll p=-1e18;
    if(c-w[i]>=0)
    p=max(v[i]+knp(c-w[i],i-1),knp(c,i-1));
    else
    p=knp(c,i-1);
    return mp[{c,i}]=p;
}
int main()
{
    fastio();
    // memset(dp,-1,sizeof(dp));
    cin>>n>>W;
    w=vector<ll> (n+1);
    v=vector<ll> (n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    cout<<knp(v,n);
}