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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b,lim=1e18;
        cin >> a >> b;
        ll x=a*b,y=1,z=1;
        bool f=1;
        if( b==1)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(ll i=x;i<=lim && f;i+=x)
        {
            for(ll j=a;j<=lim && f;j+=a)
            {
                ll k=abs(i-j);
                if(k%a==0 && i!=j && j!=k && k!=i && j%a==0)
                {
                    f=0;
                    x=i;
                    y=j;
                    z=k;
                    break;
                }
            }
        }
        ll ar[]={x,y,z};
        sort(ar,ar+3);
        cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<"\n";
    }
}