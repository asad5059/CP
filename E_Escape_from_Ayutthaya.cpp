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
ll n, m;
const ll inf = 1e18;
char a[1001][1001];
ll dis[1001][1001];
ll vis[1001][1001];
pair<int, int> st, ex, fi;
int d1[] = {1, -1, 0, 0};
int d2[] = {0, 0, 1, -1};
bool ok(int i, int j)
{
    return vis[i][j] == 0 && a[i][j] != '#' && a[i][j] != 'F' && i >= 1 && i <= n && j >= 1 && j <= m;
}
void bfs(int i, int j)
{
    vis[i][j] = 1;
    dis[i][j] = 0;
    queue<pair<int, int>> q;
    q.push({i, j});
    while (!q.empty())
    {
        pair<int, int> pr;
        pr = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int x = pr.ff;
                int y = pr.ss;
                if (ok(x + d1[i], y + d2[j]))
                {
                    q.push({x + d1[i], y + d2[j]});
                    vis[x + d1[i]][y + d2[j]] = 1;
                    dis[x + d1[i]][y + d2[j]] = dis[x][y] + 1;
                }
            }
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {

                cin >> a[i][j];
                if (a[i][j] == 'S')
                    st = {i, j};
                if (a[i][j] == 'F')
                    fi = {i, j};
                if (a[i][j] == 'E')
                    ex = {i, j};
            }
        }
        memset(vis, 0, sizeof(vis));
        memset(dis,-1,sizeof(dis));
        bfs(st.first, st.second);
        int ps=dis[ex.first][ex.second];
        memset(dis, -1, sizeof(dis));
        memset(vis, 0, sizeof(vis));
        bfs(fi.first, fi.second);
        int fs=dis[ex.ff][ex.ss];
        if(fs==-1)
        cout<<"Y\n";
        else if (ps >= fs || ps==-1)
            cout << "N\n";
        else
            cout << "Y\n";
    }
}