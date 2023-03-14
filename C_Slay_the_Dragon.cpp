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
ll n, a[200000], l, r, mid, n2, m, p, q, ans;
vector<ll> v, v1;
set<ll> s;
ll f(ll k)
{
    ll res = 0;
    if (k < p)
    {
        res += p - k;
    }
    if (a[n - 1] - k < q)
    {
        res += ((q - (a[n - 1] - k)));
    }
    return res;
}
int main()
{
    fastio();
    cin >> n;
    v = vector<ll>(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
        if (i == 0)
            a[i] = v[i];
        else
            a[i] = a[i - 1] + v[i];
    }
    n2 = s.size();
    for (auto i : s)
        v1.pb(i);
    cin >> m;
    while (m--)
    {
        cin>>p>>q;
        int j=lower_bound(v1.begin(),v1.end(),p)-v1.begin();
        int k=upper_bound(v1.begin(),v1.end(),p)-v1.begin();
        cout<<min(min(f(v1[j]),min(f(v1[j-1]),f(v1[k-1]))),f(v1[k]))<<"\n";
    }
}