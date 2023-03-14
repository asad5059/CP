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
vector<ll> v[150001];
set<ll> s;
ll vis[150001];
void dfs(ll i)
{
    vis[i]=1;
    s.insert(i);
    for(auto j:v[i])
    {
        if(vis[j]==0)
        dfs(j);
    }
}
int main()
{
    fastio();
    cin >> n >> m;
    bool flag = 1;
    for (int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
        if (v[x].size() > 1 || v[y].size() > 1)
            flag = 0;
    }
    ll n1 = s.size();
    if (flag)
        cout << "YES";
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                s.clear();
                flag=1;
                dfs(i);
                n1=s.size();
                for(auto j:s)
                {
                    if(v[j].size()<n1-1)
                    {
                        cout<<"NO";
                        return 0;
                    }
                }
            }
        }
        cout<<"YES";
    }
}