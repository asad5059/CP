#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
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
ll mx=10001;
vector<ll> p;
vector<ll> ans;
void seg(ll l,ll r)
{
    ll n=r-l+1;
    bool f[n]; for(int i=0;i<n;i++) f[i]=1;
    if(l==1) f[0]=0;
    for(auto i:p)
    {
        for(ll j=max(i*i,(l+i-1)/(i*i));j<=r;j+=i)
        f[j-l]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]==1)
        {
            ans.push_back(i+l);
        }
    }
    for(int i=0;i<ans.size();i+=100)
    {
        cout<<ans[i]<<"\n";
    }
}
int main()
{
    fastio();
    bool f[mx+1]{0};
    for(int i=2;i*i<=mx;i++)
    {
        if(f[i]==0)
        {
            for(int j=i*i;j<=mx;j+=i)
            {
                f[j]=1;
            }
        }
    }
    for(int i=2;i<=mx;i++)
    {
        if(f[i]==0) p.pb(i);
    }
    seg(1,100000000);
}