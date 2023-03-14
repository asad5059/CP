//subtree size calculation using DFS

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
int sz[100];
vector <ll> adj[100];
bool vis[100];
ll node,edge,x,y;
int dfs(ll u)
{
    vis[u]=1;
    int cur=1;
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        {
            cur+=dfs(i);
        }
    }
    return sz[u]=cur;
}
int main()
{
    fastio();
    cin>>node;
    edge=node-1;
    while(edge--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    sz[1]=dfs(1);
    for(int i=1;i<=node;i++)
    cout<<"Subtree size of node "<<i<<" : "<<sz[i]<<"\n";
}