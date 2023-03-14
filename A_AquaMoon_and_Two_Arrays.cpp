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
        ll n, sum = 0;
        cin >> n;
        vector<ll> a, b, dif;
        vector<pair<ll, ll>> ans;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.pb(x);
            dif.pb((a[i] - b[i]));
            sum += a[i] - b[i];
        }
        if (sum != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        ll cnt = 0;
        while (1)
        {
            for (int i = 0; i < n; i++)
            {
                ll x = -1, y = -1;

                if (dif[i] > 0 && x == -1)
                {
                    x = i + 1;
                    for (int j = 0; j < n; j++)
                    {
                        if (i == j)
                            continue;
                        else if (dif[j] < 0)
                        {
                            y = j + 1;
                            break;
                        }
                    }
                }
                if (x != -1 && y != -1)
                {
                    ans.pb({x,y});
                    dif[x - 1]--;
                    dif[y - 1]++;
                    break;
                }
            }
            bool f = 1;

            for (int j = 0; j < n; j++)
            {
                if (dif[j] != 0)
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                break;
        }
        cout << ans.size() << "\n";
        for (auto i : ans)
        {
            cout << i.ff << " " << i.ss << "\n";
        }
    }
}