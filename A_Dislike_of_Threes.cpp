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
vector<ll> v;
void f()
{
    for (int i = 1; i < 1e8; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
            v.pb(i);
        if (v.size() >= 1001)
            break;
    }
}
int main()
{
    fastio();
    f();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << v[n - 1] << "\n";
    }
}