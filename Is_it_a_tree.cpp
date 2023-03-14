//edge must be node-1 to be a tree
//all nodes must be connected

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
vector <ll> adj[10001];
bool vis[10001];
void dfs(ll m)
{
    vis[m]=1;
    for(int i=0;i<adj[m].size();i++)
    {
        if(vis[adj[m][i]]==0)
        {
            dfs(adj[m][i]);
        }
    }
}
int main()
{
    fastio();
    ll n,m,x,y;
    cin>>n>>m;
    if(m!=n-1)
    {
        cout<<"NO";
        return 0;
    }
    while(m--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            cnt++;
        }
    }
    if(cnt>1)
    cout<<"NO";
    else
    cout<<"YES";
}