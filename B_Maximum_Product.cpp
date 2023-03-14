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
ll n;
vector <ll> v(100005);
ll dp[100005][100];
ll f(ll cnt,ll pos)
{
    if(pos>=n || cnt==5)
    return 1;
    ll k=1;
    // if(dp[pos][cnt]!=-1)
    // return dp[pos][cnt];
    if(n-pos+cnt<=5)
    {
        k=v[pos]*f(cnt+1,pos+1);
    }
    else
    {
        k=max(v[pos]*f(cnt+1,pos+1),f(cnt,pos+1));
    }
    return k;
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cout<<f(0,0)<<"\n";
    }
}