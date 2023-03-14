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
bool vis[101];
ll cnt=0;
bool dfs(int u,int p)
{
    if(vis[u]) return 0;
    vis[u]=1;
    for(auto i:adj[u])
    {
        if(i!=p)
        {
            cnt++;
            if(dfs(i,u)==0) return 0;
        }
    }
    return 1;
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
    ll ans=0;
    for(int i=1;i<=node;i++)
    {
        cnt=0;
        if(vis[i]==0)
        {
            if(dfs(i,-1)==0 && cnt%2) ans++;
        }
    }
    if((node-ans)%2) ans++;
    cout<<ans;
}