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
int main()
{
    fastio();
    ll t,tmp=0;
    cin>>t;
    vector <ll> v;
    for(int i=1;i<2e5;i++)
    {
        tmp+=i;
        v.pb(tmp);
    }
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        int idx=lower_bound(v.begin(),v.end(),k)-v.begin();
        if(k==1)
        {
            for(int i=0;i<n-2;i++) cout<<'a'; cout<<"bb\n";
        }
        else{
            idx++;
            string ans(n,'a');
            ans[(n-1)-idx]='b';
            ans[n-1]='b';
            tmp=idx-1;
            ll nth=tmp*(tmp+1)/2;
            nth++;
            tmp=k-nth;
            if(nth<k){
            ll swapwith=(n-1)-tmp;
            swap(ans[n-1],ans[swapwith]);
            }
            cout<<ans<<"\n";
        }
        
    }
}