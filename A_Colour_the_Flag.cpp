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
int a[51][51];
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, f = 0;
        cin >> n >> m;
        char a[n + 1][m + 1], b[n + 1][m + 1], c[n + 1][m + 1];
        int k = 0, l = 0;
        for (int i = 1; i <= n; i++)
        {
            k = l;
            for (int j = 1; j <= m; j++)
            {
                if (k == 1)
                {
                    a[i][j] = 'R';
                    b[i][j] = 'W';
                }
                else
                {
                    a[i][j] = 'W';
                    b[i][j] = 'R';
                }
                k = k ^ 1;
            }
            l = l ^ 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> c[i][j];
            }
        }
        bool f1 = 1, f2 = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if ((a[i][j] == 'R' && c[i][j] == 'W') || (a[i][j] == 'W' && c[i][j] == 'R'))
                {
                    f1 = 0;
                }
                if ((b[i][j] == 'R' && c[i][j] == 'W') || (b[i][j] == 'W' && c[i][j] == 'R'))
                {
                    f2 = 0;
                }
            }
        }
        if (f1 == 0 && f2 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if (f1 == 1)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= m; j++)
                    {
                        cout << a[i][j];
                    }
                    cout << "\n";
                }
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= m; j++)
                    {
                        cout << b[i][j];
                    }
                    cout << "\n";
                }
            }
        }
    }
}