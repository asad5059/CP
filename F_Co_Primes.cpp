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
bool ok(ll x)
{
    if(x%2==0 || x==0) return 0;
    for(int i=3;i*i<=x;i+=2)
    if(x%i==0) return 0;

    return 1;
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll a,b,m,ans=0;
        cin>>a>>b>>m;
        for(int i=0;i<=m;i++)
        {
            if(__gcd(a+i,b+i)==1)
            {
                cout<<a+i<<" "<<b+i<<endl;
                ans++;
            }
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;
    }
}