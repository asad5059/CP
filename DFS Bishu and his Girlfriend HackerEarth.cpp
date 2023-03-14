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
vector <ll> adj[1000000];
bool vis[1000000];
ll dis[1000000];
void dfs(ll m,ll d)
{
    vis[m]=1;
    dis[m]=d;
    for(int i=0;i<adj[m].size();i++)
    {
        if(vis[adj[m][i]]==0)
        {
            dfs(adj[m][i],d+1);
        }
    }
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    ll e=n-1;
    vector <pair<ll,ll>> pr;
    ll x,y;
    while(e--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1,0);
    ll q,mi_dis=INT_MAX,mi_no=-1,tmp=INT_MAX;
    cin>>q;
    while(q--)
    {
        cin>>x;
        pr.pb({x,dis[x]});
    }
    sort(pr.begin(),pr.end());
    for(auto i:pr)
    {
        mi_dis=min(mi_dis,i.ss);
        if(mi_dis!=tmp)
        {
            mi_no=i.ff;
        }
        tmp=mi_dis;
    }
    cout<<mi_no<<"\n";

}