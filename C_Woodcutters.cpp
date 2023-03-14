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
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
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
ll n, k;
vector<pair<ll, ll>> v;
ll dp[1000001][10];
ll f(ll x, ll p)
{
    if(dp[x][p]!=-1) return dp[x][p];
    if (x >= n - 1)
    {
        if(x==n-1)
        return 1;
        else return 0;
    }
    ll l, a = -1e18;
    l = v[x - 1].ff;
    if (p == 1)
    {
        l = v[x - 1].ff + v[x - 1].ss;
    }
    if(l<v[x].ff-v[x].ss)
    {
        a=max(1+f(x+1,0),a);

    }
    else if(v[x].ff+v[x].ss<v[x+1].ff)
    {
        a=max(a,max(1+f(x+1,1),f(x+1,-1)));
    }
    else
    {
        a=max(f(x+1,-1),a);
    }
    return dp[x][p]=a;
}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.pb({x, y});
    }
    cout << 1+f(1, 0);
}