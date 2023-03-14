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
ll n, m,cnt,sum=0;
string s="";
ll arr[101];
vector<int> adj[101],v;
bool vis[101];
ll dfs(int x)
{
    s=to_string(x);
    vis[x] = 1;
    sum+=arr[x];
    map<ll, ll> mp;
    ll p = -1, q = -1;
    for (auto i : adj[x])
    {
        if (vis[i] == 0)
        {
            mp[i] = arr[i];
        }
    }
    for (auto i : mp)
    {
        if (p == -1 && q == -1)
        {
            p = i.ff, q = i.ss;
        }
        else
        {
            if (i.ss > q)
            {
                p = i.ff;
                q=i.ss;
            }
        }
    }
    if (p != -1 && q != -1)
        dfs(p);
    return sum;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        sum=0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < 101; i++)
            adj[i].clear();
        ll x, y;
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            adj[x].pb(y);
        }
        cout << "Case " << tc << ": " << dfs(0) << " " << s<< "\n";
    }
}