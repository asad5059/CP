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
ll n, m, ans = 0, st = 0, x, y, p, q, px, s, t;
bool f(ll x, ll y)
{
    return x>=1 && y>=1 && x<=n && y<=m;
}
int main()
{
    fastio();
    cin >> n >> m;
    ll cx, cy;
    cin >> cx >> cy;
    ll k;
    cin >> k;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        v.pb({x, y});
    }
    for (int i = 0; i < v.size(); i++)
    {
        x = v[i].ff;
        y = v[i].ss;
        for (ll m = 1e11; m; m /= 2)
        {
            while (f(cx + m * x, cy + m * y))
            {
                cx += m * x;
                cy += m * y;
                ans += m;
            }
        }
    }
    cout << ans;
    return 0;
}