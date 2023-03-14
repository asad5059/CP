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
bool f[1000000];
int main()
{
    fastio();
    vector <ll> v;
    for(int i=2;i*i<=1000000;i++)
    {
        if(f[i]==0)
        {
            for(int j=i+i;j<=1000000;j+=i)
            f[j]=1;
        }
    }
    for(int i=2;i<1000000;i++)
    {
        if(f[i]==0)
        v.pb(i);
    }
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        for(int i=2;;i++)
        {
            ll a,b;
            a=n-i;
            b=i;
            if(f[a]==0 && f[b]==0)
            {
                cout<<n<<" = "<<b<<" + "<<a<<"\n";
                break;
            }
        }
    }

}