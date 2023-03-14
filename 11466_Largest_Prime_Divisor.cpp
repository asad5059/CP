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
int main()
{
    fastio();
    ll n;
    while(cin>>n && n)
    {
        if(n<0) n*=-1;
        set <ll> s;
        for(ll i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                n/=i;
                s.insert(i);
            }
        }
        if(n>1)
        {
            s.insert(n);
        }
        ll ans=-1;
        if(s.size()>=2)
        ans=*s.rbegin();
        cout<<ans<<"\n";
    }
}