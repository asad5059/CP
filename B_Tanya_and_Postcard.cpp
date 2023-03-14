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
char flip(char c)
{
    if (c >= 'a' && c <= 'z')
        return toupper(c);
    return tolower(c);
}
int main()
{
    fastio();
    string s1, s2;
    cin >> s1 >> s2;
    map<char, ll> mp;
    for (int i = 0; i < s2.size(); i++)
    {
        mp[s2[i]]++;
    }
    ll ans1 = 0, ans2 = 0;
    vector<ll> v;
    for (int i = 0; i < s1.size(); i++)
    {
        if (mp[s1[i]] > 0)
        {
            ans1++;
            mp[s1[i]]--;
            v.push_back(i);
        }
    }
    ll ptr = 0;
    for (int j = 0; j < s1.size(); j++)
    {
        if (v.size() > 0 && ptr<v.size())
        {
            if (v[ptr] == j)
            {
                ptr++;
                continue;
            }
        }
        char c = flip(s1[j]);
        if (mp[c] > 0)
        {
            mp[c]--;
            ans2++;
        }
    }
    cout << ans1 << " " << ans2 << "\n";
}