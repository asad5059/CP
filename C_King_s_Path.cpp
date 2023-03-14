#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<ll,ll>
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
ll xa,ya,xb,yb;
map <pii,ll> mp;
map <pair<ll,ll>,ll> dis;
ll dx[]={1,1,1,0,0,-1,-1,-1};
ll dy[]={1,0,-1,1,-1,1,0,-1};
bool f(ll x,ll y)
{
    if(x<=0 || x>1e9 || y<1 || y>1e9)
    return 0;
    return mp[{x,y}];
}
ll bfs(pii x,pii y)
{
    if(x==y) return dis[x];
    queue <pair<ll,ll>> q;
    q.push(x);
    dis[x]=0;
    while(!q.empty())
    {
        auto pr=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            ll x1=pr.ff+dx[i],y1=pr.ss+dy[i];
            if(!f(x1,y1)) continue;
            pii r={x1,y1};
            if(dis[r]==0)
            {
                dis[r]=dis[pr]+1;
                q.push(r);
            }
            if(r==y)
            return dis[pr]+1;
        }
    }
    return -1;
}
int main()
{
    fastio();
    cin>>xa>>ya>>xb>>yb;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        for(int j=y;j<=z;j++)
        mp[{x,j}]=1;
    }
    cout<<bfs({xa,ya},{xb,yb});
}