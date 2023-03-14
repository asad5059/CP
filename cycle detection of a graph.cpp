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
ll node,edge,st,x,y;
vector <ll> adj[100];
bool vis[100];

bool dfs(int u,int p)
{
    vis[u]=1;
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        {
            if(dfs(i,u)==1)
            return 1;
        }
        else if(i!=p)
        return 1;
    }
    return 0;
}

int main()
{
    fastio();
    cin>>node>>edge>>st;
    while(edge--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    cout<<(dfs(st,-1)==1?"Cycle detected":"Not Found");
}