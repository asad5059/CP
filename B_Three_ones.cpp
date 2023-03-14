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
ll m=12345,n;
ll dp[100001][5];
ll f(ll x,ll cnt)
{
    if(dp[x][cnt]!=-1)
    return dp[x][cnt];
    if(n==x)
    {
        return 1;
    }
    ll p=0;
    if(cnt<2)
    {
        p=(p%m + f(x+1,cnt+1)%m)%m;
        p=(p%m + f(x+1,0)%m)%m;
    }
    else
    {
        p=(p%m + f(x+1,0)%m)%m;
    }

    return dp[x][cnt] =  p;
}
int main()
{
    fastio();
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<f(0,0);
}