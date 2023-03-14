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
char a[1001][1001];
ll dp[1001][1001];
ll n;
ll f(int i,int j)
{
    if(a[i][j]=='*')
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i==n && j==n)
    return 1;
    ll f1=0,f2=0;
    if(a[i+1][j]=='.')
    f1=f(i+1,j)%1000000007;
    if(a[i][j+1]=='.')
    f2=f(i,j+1)%1000000007;
    return dp[i][j]=(f1%1000000007+f2%1000000007)%1000000007;
}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<f(1,1);
}