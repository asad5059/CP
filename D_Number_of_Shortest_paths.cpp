#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
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
ll n,m;
int vis[200001];
int dis[200001];
vector <ll> v[200001];
void bfs(int i)
{
    vis[i]=1;
    dis[i]=0;
    queue <ll> q;
    q.push(i);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        for(auto j:v[x])
        {
            if(vis[j]==-1)
            {
                vis[j]=1;
                q.push(j);
                dis[j]=dis[x]+1;
            }
        }
    }
}
int main()
{
    fastio();
    cin>>n>>m;
    ll x,y;
    memset(vis,-1,sizeof(vis));
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    bfs(1);
    ll cnt=0,mi=dis[n],mod=19+7;
    cout<<mi<<"\n";
    for(auto i:v[n])
    {
        if(dis[i]==mi-1)
        cnt++;
    }
    cout<<cnt;
}