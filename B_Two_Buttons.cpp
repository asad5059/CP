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
ll dis[100000];
ll vis[100000];
void bfs(ll x)
{
    dis[x]=0;
    queue<ll> q;
    q.push(x);
    vis[x]=1;
    while(!q.empty() && dis[m]==-1)
    {
        ll cur=q.front();
        // cout<<cur<<"\n";
        q.pop();
        if(vis[cur-1]==0)
        {
            q.push(cur-1);
            vis[cur-1]=1;
            dis[cur-1]=dis[cur]+1;
        }
        if(vis[cur*2]==0 && cur*2<m*2)
        {
            q.push(cur*2);
            vis[cur*2]=1;
            dis[cur*2]=dis[cur]+1;
        }
    }
}
int main()
{
    fastio();
    cin>>n>>m;
    dis[m]=-1;
    bfs(n);
    // for(int i=0;i<20;i++)
    // cout<<dis[i]<<" ";
    cout<<dis[m];
}