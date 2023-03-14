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
    ll n, m;
    cin >> n >> m;
    vector<ll> v[n + 1];
    for (int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    cout << n - 1 << "\n";
    queue<ll> r;
    ll ptr = 0;
    for (int i = 1; i <= n && m>0; i++)
    {
        if (v[i].size() == 0)
        {
            for (int j = 1; j <= n; j++)
                if (i != j)
                    cout << i << " " << j << "\n";
            return 0;
        }
    }
    for(int i=2;i<=n;i++)
    cout<<1<<" "<<i<<"\n";
}