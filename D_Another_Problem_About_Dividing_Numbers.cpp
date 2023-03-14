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
ll a,b,k;
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll gc=__gcd(a,b);
        if((a==b && k==1))
        cout<<"NO\n";
        else if(a==1 && k==1 && b>1)
        cout<<"YES\n";
        else if(a==b && k==b && k>1)
        cout<<"NO\n";
        else if((gc%k==0))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}