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
ll a[10000];
ll f(ll n)
{
    ll sum=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            sum+=i;
            else
            sum+=i+(n/i);
        }
    }
    return sum;
}
int main()
{
    fastio();
    memset(a,-1,sizeof(a));
    for(int i=1;i<=1000;i++)
    {
        a[f(i)]=i;
    }
    ll n,i=1;
    while(cin>>n && n)
    {
        cout<<"Case "<<i++<<": "<<a[n]<<endl;
    }
}
