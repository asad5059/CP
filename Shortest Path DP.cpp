//reach (1,1) to (n,m). right and down only. print shortest path.
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
ll n,m;
char a[100][100];
ll f(ll i,ll j,ll cnt)
{
    if(i==n-1 && j==m-1)
    {
        return cnt;
    }
    ll x=1e18,y=1e18;
    if(a[i+1][j]=='.')
    {
        x=min(f(i+1,j,cnt+1),x);
    }
    if(a[i][j+1]=='.')
    {
        y=min(y,f(i,j+1,cnt+1));
    }
    return min(x,y);

}
int main()
{
    fastio();
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<f(0,0,0);
}