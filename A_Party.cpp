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
ll n;
ll cnt=1;
vector <ll> adj[2001];
bool vis[2001];
void dfs(ll x,ll d)
{
    cnt=max(cnt,d);
    vis[x]=1;
    for(int i=0;i<adj[x].size();i++)
    {
        ll q=adj[x][i];
        dfs(q,d+1);
    }
}
int main()
{
    fastio();
    cin>>n;
    ll x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x!=-1)
        {
            adj[i].pb(x);
        }
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i,1);
    }
    cout<<cnt;
}