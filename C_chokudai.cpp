#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
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
}
string s, ans = "chokudai";
ll mod = 1e9 + 7;
ll dp[100001][10];
ll f(ll i, ll p)
{
    if (dp[p][i] != -1)
        return dp[p][i];
    if (i == ans.size())
    {
        return 1;
    }
    if (p >= s.size())
    {
        return 0;
    }
    if (i > 8)
        return 0;
    ll an = 0;
    for (int j = p; j < s.size(); j++)
    {
        if (s[j] == ans[i])
        {
            an += f(i + 1, j + 1);
        }
    }
    return dp[p][i] = an % mod;
}
int main()
{
    fastio();
    memset(dp, -1, sizeof(dp));
    cin >> s;
    cout << f(0, 0);
}