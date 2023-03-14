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
ll r, c;
char grid[1001][1001];
ll s1,s2,e1,e2;
ll dis[1001][1001];
ll vis[1001][1001];
ll d1[]={0,0,1,-1};
ll d2[]={1,-1,0,0};
bool ok(ll i,ll j)
{
    return grid[i][j]=='S' && i<r && i>=0 && j>=0 && j<c && vis[i][j]==0;
}
void bfs(ll i,ll j)
{
    vis[i][j]=1;
    queue<pair<ll,ll>> q;
    q.push({i,j});
    while(!q.empty())
    {
        pair<ll,ll> cur= q.front();
        q.pop();
        for(int k=0;k<4;k++)
        {
            if(ok(cur.ff+d1[k],cur.ss+d2[k]))
            {
                vis[cur.ff+d1[k]][cur.ss+d2[k]]=1;
                dis[cur.ff+d1[k]][cur.ss+d2[k]]=dis[cur.ff][cur.ss]+1;
                q.push({cur.ff+d1[k],cur.ss+d2[k]});
            }
        }
    }
}
int main()
{
    fastio();
    while (cin >> r >> c && r && c)
    {
        memset(grid, 'S', sizeof(grid));
        memset(dis, 0, sizeof(dis));
        memset(vis, 0, sizeof(vis));
        ll k;
        cin >> k;
        while (k--)
        {
            ll x, y;
            cin >> x >> y;
            while (y--)
            {
                ll p;
                cin >> p;
                grid[x][p] = 'B';
            }
        }
        cin>>s1>>s2>>e1>>e2;
        bfs(s1,s2);
        cout<<dis[e1][e2]<<'\n';
    }
}