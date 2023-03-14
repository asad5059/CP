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
ll brute(ll a[],ll n)
{
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]-a[i]==j-i)
            {
                cout<<i<<" "<<j<<"\n";
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,cnt=0;
        cin>>n;
        map <ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x-i]++;
        }
        cnt=0;
        for(auto i:mp)
        {
            cnt+= ((i.ss)*(i.ss-1)/2);
        }
        cout<<cnt<<"\n";
    }
}
