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
double dp[27];
char a[100][100];
vector<pair<int, int>> v;
ll n, m, x;
set<char> st, st2;
int main()
{
    fastio();
    double dis, d;
    bool f=0;
    for (int i = 0; i < 27; i++)
        dp[i] = 1e10;
    cin >> n >> m >> x;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            st2.insert(a[i][j]);
            if (a[i][j] == 'S')
            {
                v.pb({i, j});
                f=1;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        int p, q;
        p = v[i].ff, q = v[i].ss;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                if (a[j][k]>='a' && a[j][k]<='z')
                {
                    dis = sqrt((((p - j) * (p - j)) + ((q - k) * (q - k))));
                    if (dis <= x)
                    {
                        dp[a[j][k] - 'a'] = min(dis,dp[a[j][k] - 'a']);
                    }
                }
            }
        }
    }
    ll q, cnt = 0;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        if(c>='A' && c<='Z' && f==0)
        {
            cout<<-1;
            return 0;
        }
        if (st2.find(tolower(c)) == st2.end())
        {
            cout << -1;
            return 0;
        }
        if (c >= 'a' && c <= 'z')
            continue;
        else
        {
            c = tolower(c);
            // cout << c << " " << d << "\n";
            d = dp[c - 'a'];
            if (d > x)
                cnt++;
        }
    }
    cout << cnt;
}