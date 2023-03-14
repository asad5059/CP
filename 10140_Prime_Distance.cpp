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
bool p[99998954];
int main()
{
    fastio();
    vector <ll> v;
    for (ll i = 2; i * i <= 99998954; i++)
    {
        if (p[i] == 0)
        {
            for (ll j = i * i; j <= 99998954; j += i)
            {
                p[j] = 1;
            }
        }
    }
    ll l,r;
    while(cin>>l>>r)
    {
        vector <ll> v1;
        ll x1,y1,x2,y2,d1=INT_MAX,d2=-1;
        for(int i=l;i<=r;i++)
        {
            if(p[i]==0)
            v1.pb(i);
        }
        for(int i=1;i<v1.size() && v1.size()>1;i++)
        {
            if(v1[i]-v1[i-1]<d1)
            {
                d1=v1[i]-v1[i-1];
                x1=v1[i-1];
                y1=v1[i];
            }
            if(v1[i]-v1[i-1]>d2)
            {
                d2=v1[i]-v1[i-1];
                x2=v1[i-1];
                y2=v1[i];
            }

        }
        if(v1.size()<2)
        {
            cout<<"There are no adjacent primes.\n";
        }
        else
        {
            cout<<x1<<","<<y1<<" are closest, "<<x2<<","<<y2<<" are most distant.\n";
        }

    }
}