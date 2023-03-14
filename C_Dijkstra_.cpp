#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
#define pii pair<ll,ll>
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
const ll mod = 1e9+7;

ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return bigMod(a,mod-2) ; }
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
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
ll n,m;
vector<pair<ll,ll>> v[100001];
ll dis[100001],parent[100001];
void dijkstra(ll u)
{
    for(int i=0;i<=n;i++) dis[i]=INF;
    dis[u]=0;
    priority_queue<pii,vector<pii>,greater<pii>> q;
    q.push({dis[u],u});
    while(!q.empty())
    {
        pii p=q.top();
        q.pop();
        for(auto i:v[p.ss])
        {
            if(dis[i.ff]>p.first+i.ss)
            {
                dis[i.ff]=p.ff+i.ss;
                q.push({dis[i.ff],i.ff});
                parent[i.ff]=p.ss;
            }
        }
    }
    
}
int main()
{
    fastio();
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        v[x].push_back({y,z});
        v[y].push_back({x,z});
    }
    dijkstra(1);
    if(dis[n]==INF)
    {
        cout<<-1;
    }
    else
    {
        deque<ll> ans;
        int j=n;
        ans.push_front(n);
        while(j!=1)
        {
            ans.push_front(parent[j]);
            j=parent[j];
        }
        for(auto i:ans) cout<<i<<" ";
    }
}