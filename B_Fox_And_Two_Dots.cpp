#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<ll, ll>
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
char a[51][51];
bool vis[51][51];

pii x;
ll d1[] = {1, -1, 0, 0}, n, m;
ll d2[] = {0, 0, 1, -1};
map<char, int> mp;
bool f(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == a[x.ff][x.ss] && vis[i][j] == 0;
}
bool f1(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == a[x.ff][x.ss] && vis[i][j] == 1 && i == x.ff && j == x.ss;
}
bool dfs(int i, int j, int cnt)
{
    // cout << i + 1 << " " << j + 1 << "\n";
    vis[i][j] = 1;
    cnt++;
    if (cnt >= 4)
    {
        for (int p = 0; p < 4; p++)
        {
            if (f1(i + d1[p], j + d2[p]))
            {
                // cout << i + d1[p] + 1 << " " << j + d2[p] + 1 << "\n";
                return 1;
            }
        }
    }
    bool x = 0;
    for (int p = 0; p < 4; p++)
    {
        if (f(i + d1[p], j + d2[p]))
            x |= dfs(i + d1[p], j + d2[p], cnt);
    }
    return x;
}
int main()
{
    fastio();
    cin >> n >> m;
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mp[a[i][j]]++;
            s.insert(a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[a[i][j]] >= 4)
            {
                x.ff = i, x.ss = j;
                memset(vis, 0, sizeof(vis));
                bool fl = dfs(i, j, 0);
                if (fl)
                {
                    // cout << "Yes " <<i<<" "<<j<<" "<<a[i][j]<<"\n";
                    cout << "Yes";
                    return 0;
                }
            }
            // s.erase(a[i][j]);
        }
    }
    cout << "No";
}