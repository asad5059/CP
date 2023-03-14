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
ll power(ll a, ll n, ll md)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = (res % md * a % md) % md;
            n--;
        }
        else
        {
            a = (a % md * a % md) % md;
            n /= 2;
        }
    }
    return res % md;
}
ll add(ll a, ll b)
{
    return (a % mod + b % mod) % mod;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll d = a - b;
        ll a_n = power(a, n, mod);
        ll b_n = power(b, n, mod);
        ll sum = add(a_n, b_n);
        if (d == 0)
        {
            cout << max(d, sum) << '\n';
            continue;
        }
        ll res = 1;
        for (ll i = 1; i * i <= d; i++)
        {
            if (d % i == 0)
            {
                ll temp = (power(a, n, i) + power(b, n, i)) % i;

                if (temp == 0)
                    res = max(res, i);

                temp = (power(a, n, d / i) + power(b, n, d / i)) % (d / i);

                if (temp == 0)
                    res = max(res, d / i);
            }
        }
        cout << res%mod << '\n';
    }
}