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
ll vis[10000];
vector<ll> v[10000];
void dfs(ll i)
{
    vis[i]=1;
    for(auto j:v[i])
    {
        if(vis[j]==0)
        dfs(j);
    }
}
int main()
{
    fastio();
    ll x, y, n, m;
    cin >> n >> m;
    set <ll> s;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        s.insert(x);
        s.insert(y);
        v[x].pb(y);
        v[y].pb(x);
    }
    ll ans = 1;
    for(auto i:s)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
        else ans*=2;
    }
    cout<<ans;
}