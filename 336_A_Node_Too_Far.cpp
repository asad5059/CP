//ID : C191008
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
ll n;
map<ll, vector<ll>> mp;
map<ll, bool> vis;
map<ll, ll> dis;
ll bfs(ll x, ll y)
{
    queue<ll> q;
    dis[x] = 0;
    q.push(x);
    vis[x] = 1;
    while (!q.empty())
    {
        ll cur = q.front();
        q.pop();
        for (auto i : mp[cur])
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                dis[i] = dis[cur] + 1;
                q.push(i);
            }
        }
    }
    ll cnt = 0;
    for (auto i : mp)
    {
        // cout<<i.ff<<" "<<i.ss<<"\n";
        if (dis[i.ff] >y || !dis[i.ff] && dis[i.ff]!=x)
            cnt++;
    }
    return cnt;
}
int main()
{
    fastio();
    ll tc = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        mp.clear();
        vis.clear();
        dis.clear();
        ll x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            mp[x].pb(y);
            mp[y].pb(x);
        }
        while (cin >> x >> y)
        {
            if(x==0 && y==0) break;
            ll ans = bfs(x, y);
            cout<<"Case "<<tc<<": "<<ans-1<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<".\n";
            tc++;
            vis.clear();
            dis.clear();
        }
    }
}