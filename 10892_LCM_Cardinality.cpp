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
set <ll> s;
void f(ll n)
{
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
}
int main()
{
    fastio();
    ll n;
    while(cin>>n)
    {
        ll cnt=0;
        if(n==0)
        break;
        s.clear();
        set <pair<ll,ll>> st;
        f(n);
        for(auto i:s)
        {
            for(auto j:s)
            {
                if(lcm(i,j)==n)
                {
                    st.insert({max(i,j),min(i,j)});
                }
            }
        }
        cout<<n<<" "<<st.size()<<"\n";
    }
}