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
    cin>>t;
    while (t--)
    {
        ll a[3], b[3], s1 = 0, s2 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            s1 += a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            s2 += b[i];
        }
        if (s1 > s2)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
}