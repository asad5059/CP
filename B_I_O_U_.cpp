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
struct s1
{
    ll x, y, z;
};

int main()
{
    fastio();
    ll n, m;
    cin >> n >> m;
    vector<s1> v(10001);
    ll tot[101];
    memset(tot, 0, sizeof(tot));
    for (int i = 0; i < m; i++)
    {
        cin >> v[i].x >> v[i].y >> v[i].z;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        tot[v[i].y] += v[i].z;
        tot[v[i].x] -= v[i].z;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (tot[i] > 0)
            ans += tot[i];
    }
    cout << ans;
}