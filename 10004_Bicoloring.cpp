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
ll n,e;
vector <ll> v[201];
bool vis[201];
int col[201];
bool bipartite(int u,int c)
{
    vis[u]=1;
    col[u]=c;
    for(auto i:v[u])
    {
        if(vis[i]==0)
        {
            if(bipartite(i,c^1)==0)
            return 0;
        }
        else if(vis[i]==1)
        {
            if(col[i]==col[u])
            return 0;
        }
    }
    return 1;

}
int main()
{
    fastio();
    while(cin>>n && n)
    {
        for(int i=0;i<201;i++)
        {
            vis[i]=0;
            v[i].clear();
        }
        cin>>e;
        ll x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bool f=bipartite(0,0);
        if(f)
        cout<<"BICOLORABLE.\n";
        else 
        cout<<"NOT BICOLORABLE.\n";
    }
}