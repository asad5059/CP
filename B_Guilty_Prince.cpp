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
char a[21][21];
bool vis[21][21];
ll n,m,s1,s2,cnt=0;
int d1[]={-1,1,0,0};  //up, down, left ,right
int d2[]={0,0,1,-1};
bool ok(int i,int j)
{
    return i>=1 && i<=m && j>=1 && j<=n && vis[i][j]==0 && a[i][j]!='#' && a[i][j]=='.';
}
void dfs(int i,int j)
{
    cnt++;
    vis[i][j]=1;
    for(int k=0;k<4;k++)
    {
        if(ok(i+d1[k],j+d2[k]))
        {
            dfs(i+d1[k],j+d2[k]);
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cnt=0;
        cin>>n>>m;
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='@')
                s1=i,s2=j;
            }
        }
        dfs(s1,s2);
        cout<<"Case "<<tc<<": "<<cnt<<"\n";
    }
}