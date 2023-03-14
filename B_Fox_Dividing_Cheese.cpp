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
int main()
{
    fastio();
    ll a,b,t;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0;
        return 0;
    }
    map<ll,ll> m,p;
    while(a%2==0){
        a/=2;
        m[2]++;
    }
    while(a%3==0){
        a/=3;
        m[3]++;
    }
    while(a%5==0){
        a/=5;
        m[5]++;
    }
    while(b%2==0){
        b/=2;
        p[2]++;
    }
    while(b%3==0){
        b/=3;
        p[3]++;
    }
    while(b%5==0){
        b/=5;
        p[5]++;
    }
    if(a==b)
    {
        cout<<abs(m[2]-p[2])+abs(m[3]-p[3])+abs(m[5]-p[5]);
    }
    else{
        cout<<-1;
    }
    
}