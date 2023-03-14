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
char a[201][201];
bool vis[201][201];
int dx[]={-1,0,1,0,-1,-1,1,1}; // dir of x : up (x-1),left (x+0), down (x+1), right (x+0) ,top-right,top-left,down-right,down-left
int dy[]={0,-1,0,1,1,-1,1,-1}; 
bool isValid(int x,int y)
{
    return x>=1 && y>=1 && x<=m && y<=n && vis[x][y]==0 && x>=1 && y>=1 && a[x][y]=='#';
}
void dfs(int x,int y) // 2 parameters because of 2 arguments
{
    vis[x][y]=1;
    // cout<<x<<" "<<y<<endl;
    for(int i=0;i<8;i++)
    {
        if(isValid(x+dx[i],y+dy[i]))
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        memset(vis,0,sizeof(vis));
        ll cnt=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]=='#' && vis[i][j]==0)
                {
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        cout<<cnt<<"\n";
    }
}