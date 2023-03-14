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
vector <ll> v[1001];
bool vis[1001];
ll dfs(ll x)
{
    vis[x]=1;
    for(int i=0;i<v[x].size();i++)
    {
        if(vis[v[x][i]]==1)
        return v[x][i];
        else
        dfs(v[x][i]);
    }    
}
int main()
{
    fastio();
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        v[i].pb(x);
    }
    for(int i=1;i<=n;i++)
    {
        memset(vis,false,sizeof(vis));
        ll ans=dfs(i);
        cout<<ans<<" ";
    }

}