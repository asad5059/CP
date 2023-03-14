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
const ll mod = 1e9 + 7;

ll bigMod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
inline ll MOD(ll a) { return (a % mod + mod) % mod; }
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
inline ll modInv(ll a) { return bigMod(a, mod - 2); }
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
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, tot = 0;
        vector<ll> v(3), cm,v2;
        for (int i=0;i<3;i++)
        {
            ll x;
            cin >> x;
            v[i]=x;
            tot += x;
            cm.pb(x/2);
        }
        cin >> m;
        sort(v.begin(), v.end(),greater<ll>());
        sort(cm.begin(), cm.end(),greater<ll>());
        v2=v; tot-=3;
        ll r = m/2, x = m-r;
        if(r<x) swap(r,x);
        ll t1=cm[0],t2=cm[2]+cm[1],p1=v[0],p2=v[1]+v[2]+1;
        if(m>tot || (m>0 && cm[0]<1 && cm[1]<1 && cm[2]<1) )
        {
            cout<<"NO\n";
        }
        else
        {
            ll p=p1-p2;
            if(p<=m)
            cout<<"YES\n";
            else
            cout<<"NO\n";

        }
    }
}

// aa bb cc cc
// b cc aa cc  b