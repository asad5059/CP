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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
ll p, n;
ll vis[100000];
vector<ll> v[100000];
set<ll> s;
ll dfs(ll i)
{
    s.insert(i);
    vis[i] = 1;
    for (auto j : v[i])
        if (vis[j] == 0)
            dfs(j);
    return s.size();
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> p >> n;
        memset(vis, 0, sizeof(vis));
        ll x, y;
        for (int i = 0; i < 1000; i++)
            v[i].clear();
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            y += 15;
            v[x].pb(y);
            v[y].pb(x);
        }
        ll ans = -1;
        for (int i = 1; i <= p + 100; i++)
        {
            
                ans = max(ans,(ll) v[i].size());
        }
        cout << ans +1<< "\n";
    }
}