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
int main()
{
    fastio();
    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    ll ans = 0;
    double posp = vp*t, posd = 0,k=.001;
    while (posp < c)
    {
        posp += vp*k;
        posd += vd*k;
        if (posp >= c)
            break;
        if (posp <= posd)
        {
            ans++;
            posp += (posd / vd + f) * vp;
            posd = 0;
        }
    }
    cout << ans;
}