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
ll a[2][100001], m;
ll dp[2][100001];
ll d1[2][100001];
ll d2[2][100001];
void f(ll x, ll y)
{
    dp[x][y] = -1;
    if (x == 1 && y == m - 1)
    {
        return;
    }
    ll p = 0, q = 1e18;
    if (x + 1 < 2 && y + 1 < m)
    {
        if (a[x + 1][y] > a[x][y + 1])
        {
            f(x + 1, y);
        }
        else
        {
            f(x, y + 1);
        }
    }
    else if (x + 1 < 2)
    {
        f(x + 1, y);
    }
    else if (y + 1 < m)
    {
        f(x, y + 1);
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0;
        cin >> m;
        memset(dp, 0, sizeof(dp));
        memset(d1, 0, sizeof(d1));
        memset(d2, 0, sizeof(d2));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                sum += a[i][j];
            }
        }
        dp[0][0] = -1;
        f(0, 0);
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<m;j++)
            cout<<dp[i][j]<<" ";
            cout<<"\n";
        }
    }
}