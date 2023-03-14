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
ll n,m,cnt=0;
set <ll> adj[500010];
bool vis[500010];
void dfs(ll u)
{
    vis[u]=1;
    cnt++;
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        dfs(i);
    }
}
int main()
{
    fastio();
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        ll k;
        cin>>k;
        vector <ll> vec(k);
        for(int j=0;j<k;j++)
        {
            cin>>vec[j];
        }
        for(int p=0;p<k;p++)
        {
            for(int q=0;q<k;q++)
            {
                if(vec[p]!=vec[q])
                adj[vec[p]].insert(vec[q]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        cnt=0;
        dfs(i);
        cout<<cnt<<" ";
    }
    cout<<endl;
}