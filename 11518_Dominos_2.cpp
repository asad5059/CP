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
vector <int> adj[10001];
bool vis[10001];
int cnt=0;
void dfs(int i)
{
    cnt++;
    vis[i]=1;
    for(auto j:adj[i])
    {
        if(vis[j]==0)
        dfs(j);
    }
}
int main()
{
    int t,n,m,l,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d", &n, &m, &l);
        for(int i=0;i<=n;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
        while(m--)
        {
            scanf("%d %d", &x, &y);
            adj[x].pb(y);
        }
        cnt=0;
        while(l--)
        {
            scanf("%d",&z);
            if(vis[z]==0)
            dfs(z);
        }
        printf("%d\n",cnt);
    }
}
