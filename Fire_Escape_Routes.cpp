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
const ll md = 1000000007;
ll node, edge, x, y, cnt = 0;
vector<ll> adj[100001];
bool vis[100001];
void dfs(ll u)
{
    if (vis[u] == 0)
    {
        vis[u] = 1;
        cnt++;
    }
    for (auto i : adj[u])
    {
        if (vis[i] == 0)
            dfs(i);
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        for (int i = 0; i < 100001; i++)
        {
            adj[i].clear();
            vis[i] = 0;
        }
        cin >> node >> edge;
        while (edge--)
        {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        ll cx = 0, p = 1;
        for (int i = 1; i <= node; i++)
        {
            if (vis[i] == 0)
            {
                cx++;
                cnt = 0;
                dfs(i);
                p=((cnt%md)*(p%md))%md;
            }
        }
        cout<<cx<<" "<<p<<'\n';
    }
}