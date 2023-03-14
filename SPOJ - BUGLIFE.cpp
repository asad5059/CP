#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
vector<ll> adj[2009];
bool vis[2009];
bool col[2009];
bool dfs(int u, int c)
{
    vis[u] = 1;
    col[u] = c;
    for (auto i : adj[u]) ///doesnt work on for(auto i:adj[u])
    {
        if (vis[i] == 0)
        {
            if (dfs(i, c ^ 1) == 0)
                return 0;
        }
        else if (col[i] == col[u])
            return 0;
    }
    return 1;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        ll n, e, x, y;
        cin >> n >> e;
        for (int i = 0; i <= n; i++)
            adj[i].clear(), vis[i] = 0, col[i] = 0;
        for (int i = 1; i <= e; i++)
        {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        bool f=1;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {

                if (!dfs(i, 0))
                {
                    f=0;
                    break;
                }
            }
        }
        if(!f)
            printf("Scenario #%d:\nSuspicious bugs found!\n",tc);
        else
            printf("Scenario #%d:\nNo suspicious bugs found!\n",tc);
    }
}