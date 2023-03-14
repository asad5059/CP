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
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        char a[n][n];
        memset(a, 'X', sizeof(a));
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
                continue;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (s[i] == '1')
                {
                    a[i][j] = '=';
                    a[j][i] = '=';
                }
            }
        }
        bool f = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                continue;
            f = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                else if (a[i][j] == 'X')
                {
                    a[i][j] = '+';
                    a[j][i] = '-';
                    f = 1;
                    break;
                }
            }
            if (!f)
            {
                f = 1;
                cout << "NO\n";
                break;
            }
            else
            {
                f = 0;
            }
        }
        if (!f)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    {
                        if(a[i][j]=='X' && i!=j)
                        {
                            a[i][j]='=';
                            a[j][i]='=';
                        }
                        cout<<a[i][j];
                    }
                cout << "\n";
            }
        }
    }
}