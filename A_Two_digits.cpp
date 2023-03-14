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
ll n;
ll dp[50];
ll f(ll k, ll cnt)
{
    if (k == n)
    {
        return 1;
    }
    ll ans = 0;

    if (cnt == 2)
        ans += f(k + 1, 1);
    else
    {
        ans += f(k + 1, 1);
        ans += f(k + 1, cnt + 1);
    }
    return dp[k] = ans;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        string s = "";
        cout << f(0, 0) << "\n";
    }
}