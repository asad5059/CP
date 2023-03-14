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
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    //#endif
}
ll C(ll n, ll m)
{
    if (n < m)
    {
        return 0;
    }
    ll up[101], down[101];
    memset(up, 0, sizeof(up));
    memset(down, 0, sizeof(down));
    for (int i = 1; i <= n; i++)
        up[i]++;
    for (int j = 1; j <= n - m; j++)
        down[j]++;
    for (int j = 1; j <= m; j++)
        down[j]++;
    for (int i = 1; i <= n; i++)
    {
        if (down[i] > 0 && up[i] > 0)
        {
            up[i]--;
            down[i]--;
        }
    }
    double ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (up[i] == 0 && down[i] == 0)
        {
            continue;
        }
        else if (up[i] > 0 && down[i] == 0)
        {
            ans *= i;
        }
        else if (up[i] == 0 && down[i] > 0)
        {
            ans /= i;
        }
    }
    ll tmmm = ans;
    return tmmm;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp;
        mp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ll ans = 0;
        ll cnt = 0;
        for (int i = 0; i <= mp[0]; i++)
        {
            ll x = mp[0] - i;
            cnt += C(mp[0], x);
        }
        ans += mp[1] *cnt;
        if(n==1)
        {
            if(mp[1]==1) ans=1;
            else ans=0;
        }
        cout << ans << "\n";
    }
}

// 3 2 1
// 3 2 1 0
// 3 2 1 0 0
// 3 2 1
// 3 2 1 0
// 3 2 1 0 0

// 2 1 3
// 2 1 3 0
// 2 1 3 0
// 2 1 3 0 0