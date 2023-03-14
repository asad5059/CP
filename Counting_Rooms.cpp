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
ll node,edge;
char a[1001][1001];
bool vis[1001][1001];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool ok(int i,int j)
{
    return i>=0 && i<=node && j>=0 && j<=edge && a[i][j]=='.' && vis[i][j]==0;
}
void dfs(int i,int j)
{
    vis[i][j]=1;
    for(int k=0;k<4;k++)
    {
        if(ok(i+dx[k],j+dy[k]))
        {
            dfs(i+dx[k],j+dy[k]);
        }
    }
}
int main()
{
    fastio();
    ll cnt=0;
    cin>>node>>edge;
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=edge;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=edge;j++)
        {
            if(vis[i][j]==0 && a[i][j]=='.')
            {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}