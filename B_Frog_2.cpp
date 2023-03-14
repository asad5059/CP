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
ll n,k;
vector  <int> v;
ll dp[100001];
ll f(ll pos)
{
    if(dp[pos]!=-1)
    return dp[pos];
    if(pos==n-1)
    return 0;
    ll c=1e18;
    for(int i=1;i<=k;i++)
    {
        if(pos+i>=n) break;
        ll q=abs(v[pos]-v[pos+i]);
        c=min(c,q+f(pos+i));
    }
    return dp[pos]=c;
}
int main()
{
    fastio();
    cin>>n>>k;
    v=vector <int>(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<f(0);
}