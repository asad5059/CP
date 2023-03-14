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
void print(ll tc, ll ans)
{
    cout << "Case #" << tc << ": " << ans << "\n";
}
vector<ll> v[40];
set<ll> all;
ll dis[50];
bool vis[50];
void init()
{
    for (int j = 0; j < 50; j++)
    {
        dis[j] = INF;
    }
    memset(vis, 0, sizeof(vis));
}
void bfs(int c)
{
    init();
    vis[c] = 1;
    dis[c] = 0;
    queue<ll> q;
    q.push(c);
    while (!q.empty())
    {
        ll n = q.front();
        q.pop();
        for (auto i : v[n])
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                dis[i] = dis[n] + 1;
                q.push(i);
            }
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        for (int i = 0; i < 40; i++)
            v[i].clear();
        all.clear();
        string s;
        cin >> s;
        ll k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            string x;
            cin >> x;
            int p = x[0] - 'A', q = x[1] - 'A';
            v[q].pb(p);
        }
        for (int i = 0; i <= 25; i++)
            all.insert(i);
        bool flg = 0;
        ll ans = 1e18;
        for (auto i : all)
        {
            bfs(i);
            bool f1 = 0;
            ll cnt = 0;
            // if (i >= 0 && i <= 2)
            // {
            //     for (int i = 0; i <=2; i++)
            //     {
            //         cout << dis[i] << " ";
            //     }

            //     cout << "\n";
            // }
            for (auto j : s)
            {
                ll x = j - 'A';
                if (dis[x] == INF)
                {
                    f1 = 1;
                    break;
                }
                cnt += dis[x];
            }
            if (!f1)
            {
                ans = min(ans, cnt);
                flg = 1;
            }
        }
        if (flg)
            print(tc, ans);
        else
            print(tc, -1);
    }
}