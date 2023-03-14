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
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
const ll sz = 2e5 + 10;
ll f[sz], mod = 998244353;
ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return bigMod(a,mod-2) ; }
void count()
{
    f[0]=1;
    for(ll i=1;i<200007;i++){
        f[i]=f[i-1]*i;
        f[i]%=mod; 
    }
}
ll C(ll n,ll r)
{
    if(n==r)
    return 1;
    ll a = f[n];
    ll b = modMul(f[r],f[n-r]);
    b = modInv(b);
    return modMul(a,b);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    count();
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        if (mp[a[n - 1]] > 1)
        {
            cout << f[n] % mod << "\n";
        }
        else if (abs(a[n - 1] - a[n - 2]) > 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            ll k = mp[a[n - 1] - 1];
            ll p,ans;
            p=modMul(C(n, k + 1),f[k]);
            p=modMul(p,f[n-k-1]);
            ans= modSub(f[n],p);
            cout << ans << "\n";
        }
    }
}