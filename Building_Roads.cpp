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
ll n, m, x, y;
vector<ll> adj[100005];
bool vis[100005];
void dfs(ll u)
{
    vis[u] = 1;
    for (auto i : adj[u])
    {
        if (vis[i] == 0)
            dfs(i);
    }
}
int main()
{
    fastio();
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<pair<ll, ll>> ans;
    ll pre = 1;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
            if (i != pre)
            {
                ans.pb({pre, i});
                pre = i;
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto i : ans)
        cout << i.ff << " " << i.ss << "\n";
}