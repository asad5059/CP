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
    ll n;
    cin>>n;
    ll x,k1,k2;
    cin>>k1;
    deque<ll> q1,q2;
    for(int i=0;i<k1;i++){
        cin>>x;
        q1.push_back(x);
    }
    cin>>k2;
    for(int i=0;i<k2;i++){
        cin>>x;
        q2.push_back(x);
    }
    ll won=-1,round=0;
    while(q1.size()>0 && q2.size()>0)
    {
        ll c1=q1.front();
        ll c2=q2.front();
        q1.pop_front();
        q2.pop_front();
        if(c1>c2)
        {

            q1.push_back(c2);
            q1.push_back(c1);
        }
        else{
            q2.pb(c1);
            q2.pb(c2);
        }
        round++;
        if(q1.size()==0 && q2.size()>0)
        {
            won=2;
        }
        else if(q2.size()==0 && q1.size()>0)
        {
            won=1;
        }
        if(round>1e6)
        {
            won=-1;
            break;
        }
    }
    if(won==-1)
    {
        cout<<won;
    }
    else
    cout<<round<<" "<<won;
}