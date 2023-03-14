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
inline ll modDiv(ll a,ll b){ a=MOD(a); b=modInv(b); return (a*b)%mod; }
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
string s;
ll r;
map<char,ll>n,p,mp,n2;
bool f(ll x){
    map<char,ll> mp;
    mp['B']=0;
    mp['S']=0;
    mp['C']=0;
    for(auto i:s) mp[i]++; 
    mp['B']=x*mp['B'];
    mp['S']=x*mp['S'];
    mp['C']=x*mp['C'];
    ll r1=0,r2=0,r3=0;
    if(n['B']<mp['B']){
        r1=mp['B']-n['B'];
    }
    if(n['S']<mp['S']){
        r2=mp['S']-n['S'];
    }
    if(n['C']<mp['C']){
        r3=mp['C']-n['C'];
    }
    ll tot=r1*p['B']+r2*p['S']+r3*p['C'];
    return tot<=r;

}
int main()
{
    fastio();
    cin>>s>>n['B']>>n['S']>>n['C']>>p['B']>>p['S']>>p['C']>>r;
    ll lo=0,hi=1e15,m=0;
    while(lo+1<hi)
    {
        m=lo+(hi-lo)/2;
        if(f(m))
        {
            lo=m;
        }
        else{
            hi=m;
        }
    }
    cout<<lo;
}