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
ll n, a, b, x = -1;
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
            {
                cout << "Yes\n";
            }
            else
                cout << "No\n";
            continue;
        }
        x = 1;
        bool f = 1;
        while (x <= n)
        {
            // cout<<x<<" "<<n-x<<"\n";
            if ((n - x) % b == 0)
            {
                cout << "Yes\n";
                f = 0;
                break;
            }
            x *= a;
        }
        if (f)
            cout << "No\n";
    }
}