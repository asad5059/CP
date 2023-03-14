#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
string a, b;
int n, m;
ll dp[100][100];
int main()
{
    fastio();
    cin >> a >> b;
    n = a.size();
    m = b.size();
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    int x = 0, y = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (dp[i][j] > ans)
            {
                ans = dp[i][j];
                x = i, y = j;
            }
        }
    }
    int i = x, j = y;
    string k, an;
    while (x > 0 && y > 0)
    {
        if(k.size()>an.size()) an=k;
        if (a[x - 1] == b[y - 1])
        {
            k += a[x-1];
            x--;
            y--;
        }
        else
        {
            k.clear();
            if (dp[x - 1][y] > dp[x][y - 1])
            {
                x--;
            }
            else
            {
                y--;
            }
        }
    }
    cout << an;
}