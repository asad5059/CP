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
bool f[20000001];
int main()
{
    fastio();
    ll n;
    set<ll>p;
    for(ll i=2;i<20000001;i++){
        if(f[i]==0){
            for(ll j=i*i;j<20000001;j+=i){
                f[j]=1;
            }
        }
    }
    for(ll i=2;i<20000001;i++){
        if(f[i]==0) p.insert(i);
    }
    while(cin>>n){
        if(n<8)
        {
            cout<<"Impossible.\n";
            continue;
        }
        ll a,b,c,d;
        if(n%2==0) a=2,b=2;
        else a=2,b=3;
        ll s=n-(a+b);
        bool flg=0;
        for(auto i:p){ 
            ll r=s-i;
            if(f[r]==0){
                c=i;
                d=r;
                flg=1;
                break;
            }
        }
        if(flg)
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
        else
        cout<<"Impossible.\n";
    }
}