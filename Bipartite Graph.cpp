#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
ll node,edge,x,y;
vector <ll> adj[101];
bool vis[100];
int col[100];
bool dfs(int u,int c)
{
    vis[u]=1;
    col[u]=c;
    for(auto i:adj[u])
    {
        if(vis[i]==1)
        {
            if(col[u]==col[i])
            return 0;
        }
        else if(vis[i]==0)
        {
            if(dfs(i,c^1)==0)
            return 0;
        }
    }
    return 1;
}
int main()
{
    fastio();
    ll st;
    cin>>node>>edge>>st;
    while(edge--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    if(dfs(st,1)==1)
    {
        cout<<"Graph is bipartite";
    }
    else
    cout<<"Graph is not bipartite";
}