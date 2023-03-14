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
int main()
{
    fastio();
    ll n;
    cin >> n;
    set<ll> v, s;
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    bool f[2000];
    memset(f, 1, sizeof(f));
    for (int i = 2; i <= 1000; i++)
    {
        if (f[i])
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                f[j] = 0;
            }
        }
    }
    vector<ll> pr;
    for (int i = 2; i <= 1000; i++)
        if (f[i])
            pr.pb(i);
    for (auto i : pr)
    {
        if (i <= n)
        {
            v.insert(i);
            for (auto j : pr)
            {
                if (j < n)
                    v.insert(j);
                if(i*j<n)
                    v.insert(i*j);
                else
                break;
            }
        }
        else
        break;
    }
    cout << v.size() << '\n';
    for (auto i : v)
        cout << i << " ";
}

// 2 = 2 4 6
// 3 = 3 6
// 4 = 4
// 5 = 5

// 2 2 4 6 8
// 3 3 6
// 4 4 8
// 5 5
// 6 6
// 7 7
