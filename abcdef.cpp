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
string s;
map <ll,ll> dp;
ll f(int i,int cnt)
{
    if(i>=s.size())
    return cnt;
    
    if(dp[i])
    return dp[i];

    ll x=INT_MAX, y= INT_MAX;
    
    if(s[i+3]!='#')
    dp[i]=x=f(i+3,cnt+1);
    
    if(s[i+2]!='#')
    dp[i]=y=f(i+2,cnt+1);
    
    return dp[i]=min(x,y);
}
int main()
{
    fastio();
    cin>>s;
    cout<<f(0,0);
}