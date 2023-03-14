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
set <ll> s,s2;
void f(ll n)
{
    s.clear();
    // cout<<n<<" : ";
    for(auto i:s2)
    {
        if(n%i==0)
        {
            // cout<<i<<" ";
            s.insert(i);
        }
    }
    // cout<<endl;
}
int main()
{
    fastio();
    bool a[1000001]{0};
    for(int i=2;i*i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=1000000;i++)
    if(a[i]==0) s2.insert(i);
    ll n;
    // for(auto i:s2)
    // cout<<i<<"\n";
    while(cin>>n)
    {
        if(n==0) break;
        f(n);
        cout<<n<<" : "<<s.size()<<"\n";
    }
}