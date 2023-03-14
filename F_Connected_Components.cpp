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
vector<ll> adj[1000000];
ll visited[1000000];
void dfs(ll m)
{
    visited[m] = true;
    for (int i = 0; i < adj[m].size(); i++)
    {
        if (visited[adj[m][i]] == 0)
        {
            dfs(adj[m][i]);
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        for(int i=0;i<1000000;i++)
        {
            adj[i].clear();
            visited[i]=0;
        }
        ll node, edge, x, y;
        cin >> node >> edge;
        while (edge--)
        {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        ll cnt = 0;
        for (int i = 0; i < node; i++)
        {
            if (visited[i] == 0)
            {
                dfs(i);
                cnt++;
            }
        }
        cout << cnt<<"\n";
    }
}