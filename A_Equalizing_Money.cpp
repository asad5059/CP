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
ll n,m;
vector <ll> adj[10005];
bool vis[10005];
ll a[10005];
ll cur=0,cnt=0;
void dfs(int c)
{
    vis[c]=1;
    cur+=a[c];
    cnt++;
    // cout<<cur<<" "<<cnt<<endl;

    for(auto i:adj[c])
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        set <ll> s;
        for(int i=0;i<10005;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
        ll sum=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll x,y;
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        bool flag=1;
        for(int i=1;i<=n && flag==1;i++)
        {
            cur=0;
            cnt=0;
            if(vis[i]==0)
            {
                dfs(i);
                if(cur%cnt!=0)
                flag=0;
                else
                {
                    s.insert(cur/cnt);
                }
                if(!flag)
                {
                    break;
                }
            }
        }
        string ans;
        if(flag && s.size()==1) ans=": Yes\n";
        else ans=": No\n";
        cout<<"Case "<<cs<<ans;
    }
}