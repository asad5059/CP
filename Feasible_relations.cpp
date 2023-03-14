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
ll n, k;
vector<ll> adj[1000001];
bool vis[1000001];
int flg = 0;
set<int> st;
bool dfs(int u)
{
    vis[u] = 1;
    for (auto i : adj[u])
    {
        if (vis[i] == 0)
            st.insert(i), dfs(i);
    }
    return st.find(flg) == st.end();
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> px;
        cin >> n >> k;
        for (int i = 0; i <= n; i++)
        {
            vis[i] = 0;
            adj[i].clear();
        }
        for (int i = 0; i < k; i++)
        {
            string s;
            ll x, y;
            cin >> x >> s >> y;
            if (s == "=")
            {
                adj[x].pb(y);
                adj[y].pb(x);
            }
            else
            {
                px.pb({x, y});
            }
            // cout<<x<<s<<y<<endl;
        }
        bool ff=1;
        for (int i = 0; i < px.size(); i++)
        {
            st.clear();
            flg = px[i].ss;
            for(int i=1;i<=n;i++)
            {
                vis[i]=0;
            }
            if (dfs(px[i].ff)==0)
            {
                ff=0;
                break;
            }
            if(!ff) break;
        }
        if(ff)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}