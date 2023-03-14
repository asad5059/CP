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
    ll t;
    cin >> t;
    while (t--)
    {
        pair<ll, ll> a, b, f;
        cin >> a.ff >> a.ss >> b.ff >> b.ss >> f.ff >> f.ss;
        ll ans = abs(a.ff - b.ff) + abs(a.ss - b.ss);
        if (a.ff == b.ff && a.ff == f.ff)
        {
            if (f.ss > a.ss && f.ss > b.ss)
            {
                // cout<<"Hi ";
            }
            else if(a.ss>f.ss && b.ss<f.ss)
            {
                ans+=2;
            }
            else if(a.ss<f.ss && b.ss>a.ss)
            {
                ans+=2;
            }
        }
        else if (a.ss == b.ss && f.ss == b.ss)
        {
            if (f.ff > a.ff && f.ff > b.ff)
            {
                // cout<<"Hi2 ";

            }
             else if(a.ff>f.ff && b.ff<f.ff)
            {
                ans+=2;
            }
            else if(a.ff<f.ff && b.ff>a.ff)
            {
                ans+=2;
            }
        }
        cout << ans << "\n";
    }
}