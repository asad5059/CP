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
    ll n, sum = 0;
    cin >> n;
    ll a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    if (n < 5)
    {
        cout << sum;
        return 0;
    }
    int r = (n + 1) / 2, c = r, k = n, l = 1;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == r || c == j || i == j || (k == j && l == i))
            {
                sum += a[i][j];
                if (k == j && l == i)
                {
                    k--;
                    l++;
                }
            }
        }
    }
    cout<<sum;
}