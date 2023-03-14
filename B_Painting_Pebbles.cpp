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
    ll n, k;
    cin >> n >> k;
    vector<ll> v[n];
    ll p[n][k + 1];
    memset(p, 0, sizeof(p));
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll c = 1;
        for (int j = 0; j < x; j++)
        {
            v[i].pb(c);
            p[i][c]++;
            c++;
            if (c > k)
                c = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                for(int x=1;x<=k;x++)
                {
                    if(abs(p[i][x]-p[j][x])>1)
                    {
                        cout<<"NO";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        for (auto j : v[i])
            cout << j << " ";
        cout << "\n";
    }
}