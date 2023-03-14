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
ll f(ll n)
{
    set <ll> s;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    return s.size();
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        vector <pair<ll,ll>> v;
        for(ll i=l;i<=r;i++)
        {
            ll n=f(i);
            v.pb({n,i});
        }
        ll mx=-1,pos=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].ff>mx)
            {
                mx=v[i].ff;
                pos=i;
            }
        }
        ll n=v.size()-1;
        cout<<"Between "<<l<<" and "<<r<<", "<<v[pos].ss<<" has a maximum of "<<v[pos].ff<<" divisors.\n";
    }
}