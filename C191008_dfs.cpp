//ID : C191008 
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
ll node,edge,st;
vector <ll> adj[100];
bool vis[100];
void dfs(ll v)
{
    vis[v]=1;
    cout<<v<<"\n";
    for(auto i:adj[v])
    {
        if(vis[i]==0) dfs(i);
    }
}
int main()
{
    fastio();
    cin>>node>>edge>>st;
    while (node--)
    {
        ll x,y;
        cin>>x>>y;;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(st);
    
}