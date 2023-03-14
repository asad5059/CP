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
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
char a[1001][1001];
ll mod=1e9+7,n,m;
ll dp[1009][1009];
ll f(int i,int j)
{
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i==n && j==m)
    return 1;
    ll x=0;
    if(i+1<=n && a[i+1][j]=='.')
    {
        x = (x%mod + f(i+1,j)%mod)%mod;
    }
    if(j+1<=m && a[i][j+1]=='.')
    {
        x= (x%mod + f(i,j+1)%mod)%mod;
    }
    return dp[i][j] = x%mod;
}
int main()
{
    fastio();
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>a[i][j];
    cout<<f(1,1);
}