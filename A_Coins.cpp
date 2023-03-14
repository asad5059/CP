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
ll n, m, w, k;
vector<ll> a, b;
ll dp[10000000], dp2[10000000];
ll f(ll i)
{
    if (i == w)
        return 1;
    
}
ll f2(ll i)
{
    if (i == w)
        return 1;
    else if (i > w)
        return 0;

    if (dp2[i] != -1)
        return dp2[i];
    ll mx = 0;
    for (ll j = 0; j < b.size(); j++)
    {
        if (a[j] + i <= w)
        {
            ll k = (f2(i + b[j]) % 1000000007);
            mx = ((mx % 1000000007) + k) % 1000000007;
        }
    }
    return dp2[i] = mx % 1000000007;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        a.clear();
        b.clear();
        cin >> n >> m >> k >> w;
        memset(dp, -1, sizeof(dp));
        memset(dp2, -1, sizeof(dp2));
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            b.pb(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll x = f(0), y = f2(0);
        ll ans = 0;
        for (int i = 0; i <= w; i++)
        {
            ll x = w - i;
            if (abs(i - x) <= k)
                ans = (ans + dp[i] * dp2[x]) % mod;
        }
        cout << ans << '\n';
    }
}