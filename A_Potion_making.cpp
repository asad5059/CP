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
    cin>>t;
    while(t--)
    {
        ll k,n;
        cin>>k;
        vector <ll> v={100,50,100,25,20,50,100,25,100,10,100,25,100,50,20,25,100,50,100,5,100,50,100,25,4,50,100,25,100,10,100,25,100,50,20,25,100,50,100,5,100,50,100,25,20,50,100,25,100,2,100,25,100,50,20,25,100,50,100,5,100,50,100,25,20,50,100,25,100,10,100,25,100,50,4,25,100,50,100,5,100,50,100,25,20,50,100,25,100,10,100,25,100,50,20,25,100,50,100,1};
        cout<<v[k-1]<<"\n";
    }
}
