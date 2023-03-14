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
bool vis[10001];
int dis[10001];
vector <ll> adj[10001];
void bfs(int u)
{
    vis[u]=1;
    dis[u]=0;
    queue <int> q;
    q.push(u);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        for(auto i:adj[x])
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                dis[i]=dis[x]+1;
                q.push(i);
            }
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>node>>edge;
        for(int i=1;i<=node;i++)
        {
            vis[i]=0;
            dis[i]=0;
            adj[i].clear();
        }
        while(edge--)
        {
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        bfs(1);
        cout<<dis[node]<<endl;
    }
}