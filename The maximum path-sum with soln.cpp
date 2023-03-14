//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
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
ll a[100][100];
ll dp[100][100];
ll dr[100][100];
ll n,m;
ll f(int i,int j)
{
    if(i==n && j==m)
    return a[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    ll x=-1e18,y=-1e18;
    if(i+1<=n)          // down=1  x
    x=a[i][j]+f(i+1,j);
    if(j+1<=m)          // right=0 y
    y=a[i][j]+f(i,j+1);
    if(x>y)
    {
        dp[i][j]=x;
        dr[i][j]=1;
    }
    else
    {
        dp[i][j]=y;
        dr[i][j]=0;
    }
    return dp[i][j];
}
void g(int i,int j)
{
    cout<<i<<" "<<j<<endl;
    if(i==n && j==m)
    return;
    if(dr[i][j]==1)
    g(i+1,j);
    else
    g(i,j+1);

}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    memset(dr,-1,sizeof(dr));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<f(1,1)<<endl;
    g(1,1);
}