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
ll div(ll a, ll b, ll n)
{
    ll ans = (b / n) - (a / n);
    if (a % n == 0)
        ans++;
    return ans;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, a, d;
        cin >> n >> m >> a >> d;
        ll v[] = {a, a + d, a + 2 * d, a + 3 * d, a + 4 * d};
        ll tot = 0;
        for (int i = 0; i < 5; i++)
        {
            tot += div(n, m, v[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                for (int k = j + 1; k < 5; k++)
                {
                    for (int l = k + 1; l < 5; l++)
                    {
                        ll lc = lcm(v[i], lcm(v[j], lcm(v[k], v[l])));
                        tot-=div(n,m,lc);
                    }
                }
            }
        }
        cout<<(n-m+1)-tot<<"\n";
    }
}

    //  2 4 6 8 10
    //  1 2 3 4 5 6 7 8 9 10
    //    1   1   1   1   1
    //        2       2
    //            2
    //                3
    //                    2