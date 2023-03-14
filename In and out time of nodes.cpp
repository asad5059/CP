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
vector <ll> adj[100];
ll node,edge,x,y;
bool vis[100];
int in[100],out[100],t=1;
void dfs(int u)
{
    vis[u]=1;
    in[u]=t++;
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
    out[u]=t++;
}
int main()
{
    fastio();
    cin>>node>>edge;
    while(edge--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    for(int i=1;i<=node;i++)
    {
        if(vis[i]==0)
        dfs(i);
    }
    cout<<"in : ";
    for(int i=1;i<=node;i++)
    cout<<in[i]<<" ";
    cout<<"\nout : ";
    for(int i=1;i<=node;i++)
    cout<<out[i]<<" ";
}