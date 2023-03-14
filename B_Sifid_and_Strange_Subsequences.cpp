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
        ll n, o = 0, mi = 1e18, go = 0;
        cin >> n;
        vector<ll> v(n), v2;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                v2.pb(v[i]);
            }
            if (v[i] == 0)
                o++;
            if (v[i] > 0)
            {
                mi = min(v[i], mi);
                go++;
            }
        }
        if (go == 0)
        {
            cout << n << "\n";
            continue;
        }
        if (o > 1)
        {
            cout << v2.size() + o << '\n';
            continue;
        }
        bool f = 1;
        sort(v2.begin(), v2.end());
        if (v2.size() > 0)
        {
            for (int i = 1; i < v2.size(); i++)
            {
                if (abs(v2[i] - v2[i - 1]) < mi)
                {
                    f = 0;
                    break;
                }
            }
            if (abs(v2[v2.size() - 1] - mi) < mi && v2.size() > 0)
            {
                f = 0;
            }
        }
        if (f && o == 1)
        {
            cout << v2.size() + 2 << "\n";
        }
        else if (f)
        {
            cout << v2.size() + 1 << "\n";
        }
        else
        {
            cout << max((int)1, (int)v2.size()) << "\n";
        }
    }
}