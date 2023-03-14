// It is defined as longest path between any two nodes of a tree

//Run a dfs from any node and we will get the node with the maximum distance from our choosen node
// let the node be x
//Run dfs again from x and we will get our diameter of the tree (i.e, max possible distance of any two node of the tree)

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
ll node,edge,x,y,cnt=0,maxD=-1,maxN=-1;
vector <ll> adj[10001];
int f=0;
bool vis[10001];
void dfs(ll u,ll d)
{
    vis[u]=1;
    if(maxD<d) maxD=d, maxN=u;
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        dfs(i,d+1);
    }
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
    dfs(1,0);
    for(int i=0;i<10001;i++)
    {
        vis[i]=0;
    }
    dfs(maxN,0);
    cout<<maxD;
}