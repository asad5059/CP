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
double n, q,ex;
ll a, b, x;
double ok(ll m)
{
    return (a*m)/b;
}
int main()
{
    fastio();
    cin >> n >> a >> b;
    ll x;
    while (n--)
    {
        cin >> x;
        q = a * x;
        ex = floor((double)q / b);
        double l = 0, r = 1e10, m;
        // cout<<ex<<"\n";
        while (abs(l-r)>1e-4)
        {
            m = (l + r) / 2.0;
            // cout<<ok(m)<<" "<<(int)m<<"\n";
            if (ok(m)>=ex)
            {
                r = m;
            }
            else
            {
                l = m;
            }
        }
        cout<<(ll)round(x-r)<<" ";
    }
}