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
    ll n,k;
    cin>>n>>k;
    vector <string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.pb(s);
    }
    if(n>=k-1)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        
    }
}