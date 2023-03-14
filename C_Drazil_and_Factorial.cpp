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
inline ll modDiv(ll a, ll b)
{
    a = MOD(a);
    b = modInv(b);
    return (a * b) % mod;
}
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
ll f(string s)
{
    ll res = 0, p = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        res += (s[i] - '0') * p;
        p *= 10;
    }
    return res;
}
map<ll, vector<ll>> m;
void build()
{
    m[2] = {2};
    m[3] = {3};
    m[4] = {2, 2, 3};
    m[5] = {5};
    m[6] = {3, 5};
    m[7] = {7};
    m[8] = {2, 2, 2, 7};
    m[9] = {2, 3, 3, 7};
}
int main()
{
    fastio();
    ll n, x;
    string s;
    cin >> n >> s;
    x = f(s);
    build();
    vector<ll> ans;
    while (x)
    {
        ll r = x % 10;
        vector<ll> k = m[r];
        for (auto i : k)
            ans.pb(i);
        x /= 10;
    }
    sort(ans.begin(), ans.end(), greater<ll>());
    for(auto i:ans) cout<<i;
}
//7 3 3 2 2 2 2
