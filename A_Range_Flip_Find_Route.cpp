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
ll r,c;
char a[100][100];
ll dp[100][100];
ll f(ll i,ll j,ll cnt)
{
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i==r-1 && j==c-1)
    {
        if(a[i][j]=='#')
        cnt++;
        return cnt;
    }
    ll x=1e18,y=1e18;
    if(a[i+1][j]=='#')
    {
        x=min(x,f(i+1,j,cnt+1));
    }
    if(a[i][j+1]=='#')
    {
        y=min(y,f(i,j+1,cnt+1));
    }
    if(a[i+1][j]=='.')
    x=min(x,f(i+1,j,cnt));
    if(a[i][j+1]=='.')
    y=min(y,f(i,j+1,cnt));
    return dp[i][j]=min(x,y);
}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<f(0,0,0);
}