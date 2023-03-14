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
ll n;
vector <ll> v[100005];
ll dp[100005][4];
ll f(ll x,ll p)
{
    if(dp[x][p]!=-1)
    return dp[x][p];
    if(x>n)
    return 0;
    ll h=-1e18;
    for(int i=0;i<3;i++)
    {
        if(p!=i)
        h=max(h,v[x][i]+f(x+1,i));
    }
    return dp[x][p]=h;
}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    cin>>n;
    ll a,b,c;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        v[i].pb(a);
        v[i].pb(b);
        v[i].pb(c);
    }
    cout<<f(1,-1);
}