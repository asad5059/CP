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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
ll toint(string s)
{
    ll r = 0, p = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        r += (p * (s[i] - '0'));
        p *= 10;
    }
    return r;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, dig = 0, q;
        cin >> n >> x;
        q = x;
        string s = to_string(x);
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = '0';
        }
        ll ans = 0, p;
        while (dig < x)
        {
            s[0] = '0';
            s = "1" + s;
            p = toint(s);
            if (dig + (s.size() - 1) * abs(p - x) < n)
            {
                dig += (s.size() - 1) * abs(p - x);
                ans += p - x;
            }
            else
                break;
            x = p;
        }

        s = to_string(x);
        ll ff = n - dig;
        ans += (ff / s.size());
        if (ff % s.size() != 0)
            ans = -1;
        cout << ans << "\n";
    }
}