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
    // 0 - both off
    // 1 - contest
    // 2 - gym
    // 3 - both on
}
ll n;
ll v[105];
ll dp[105][105][105];
ll f(ll day,ll prev,ll rest)
{
    // cout<<"day : "<<day<<" rest : "<<rest<<endl;
    if(dp[day][prev][rest]!=-1)
    return dp[day][prev][rest];
    if(day==n)
    {
        if(v[day]==0 || (v[day]==prev && prev!=3))
        return rest+1;
        else
        return rest;
    }
    ll w=1e18,x=1e18,y=1e18,z=1e18;  // 0-w 1-x 2-y
    if(v[day]==1 && prev==1)
    {
        dp[day][prev][rest]=w=f(day+1,0,rest+1);
    }
    if(v[day]==2 && prev==2)
    {
        dp[day][prev][rest]=w=f(day+1,0,rest+1);
    }
    if(v[day]!=prev && v[day]==1)
    {
        x=f(day+1,1,rest);
    }
    if(v[day]!=prev && v[day]==2)
    {
        y=f(day+1,2,rest);
    }
    if(v[day]==3)
    {
        if(prev!=1)
        x=f(day+1,1,rest);
        if(prev!=2)
        y=f(day+1,2,rest);
    }
    if(v[day]==0)
    z=f(day+1,0,rest+1);
    return dp[day][prev][rest]=min(min(x,w),min(y,z));
}
int main()
{
    fastio();
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << f(1,-1,0);
}