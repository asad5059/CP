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
int main()
{
    fastio();
    ll n,a,b;
    cin>>n>>a>>b;
    ll s=0;
    for(int i=1;i<=n;i++)
    {
        ll q=0,x=i;
        while(x)
        {
            q+=x%10;
            x/=10;
        }
        if(q>=a && q<=b)
        s+=i;
    }
    cout<<s;
}