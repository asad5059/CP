#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
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
    ll n,x;
    cin>>n>>x;
    vector <ll> v;
    for(int i=0;i<n;i++)
    {
        ll k; cin>>k; if(k<=x) v.pb(k);
    }
    n=v.size();
    sort(v.begin(),v.end(),greater<ll>());
    ll dp[x+10];
    for(int i=0;i<x+10;i++) dp[i]=1e18;
    dp[0]=0;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(i-v[j]>=0)
            dp[i] = min(1 + dp[i-v[j]],dp[i]);
        }
    }
    if(dp[x]==1e18) dp[x]=-1;
    cout<<dp[x];
}