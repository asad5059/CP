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
ll m,n;
char a[101][101];
bool vis[101][101];
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,1,-1,-1,1};
bool ok(int i,int j)
{
    return i>=1 && i<=m && j>=1 && j<=n && vis[i][j]==0 && a[i][j]=='@';
}
void dfs(int i,int j)
{
    vis[i][j]=1;
    for(int k=0;k<8;k++)
    {
        int x=i+dx[k];
        int y=j+dy[k];
        if(ok(x,y))
        {
            dfs(x,y);
        }
    }
}
int main()
{
    fastio();
    while(cin>>m>>n && m>0)
    {
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
            }
        }
        ll cnt=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]=='@' && vis[i][j]==0)
                {
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
