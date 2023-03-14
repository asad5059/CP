#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
ll row,col;
bool vis[26][26];
char a[26][26];
int dx[]={-1,0,1,0,-1,-1,1,1}; // dir of x : up (x-1),left (x+0), down (x+1), right (x+0) ,top-right,top-left,down-right,down-left
int dy[]={0,-1,0,1,1,-1,1,-1}; 
bool isValid(int x,int y)
{
    return x<=row && y<=col && vis[x][y]==0 && x>=1 && y>=1 && a[x][y]=='1';
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
    ll n,cas=1;
    while(cin>>n)
    {
        row=col=n;
        int ans=0;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cin>>a[i][j];
                vis[i][j]=0;
            }
        }
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                if(a[i][j]=='1' && vis[i][j]==0)
                {
                    dfs(i,j);
                    // cout<<i<<" "<<j<<endl;
                    ans++;
                }
                else if(vis[i][j]==0)
                vis[i][j]=1;
            }
        }
        cout<<"Image number "<<cas<<" contains "<<ans<<" war eagles.\n";
        // cout<<endl;
        cas++;
    }
}