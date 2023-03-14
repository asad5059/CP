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
ll a[100009];
ll n;
int dp[100009];
ll f(ll pos)
{
    if(pos>=n)
    return 0;
    if(dp[pos]!=-1)
    return dp[pos];
    ll x=1e18,y=1e18;
    if(pos+2<=n)
    {
        y=abs(a[pos]-a[pos+2])+f(pos+2);
    }
    if(pos+1<=n)
    {
        x=abs(a[pos]-a[pos+1])+f(pos+1);
    }
    return dp[pos]=min(x,y);

}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
    }
    cout << f(1);
}