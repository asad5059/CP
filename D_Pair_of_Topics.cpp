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
    ll n;
    cin>>n;
    vector <pair<ll,ll>> v(n);
    ll x,j=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        if(i<n)
        {
            v[i].ff=x;
        }
        else if(i>=n)
        {
            v[j].ss=x;
            j++;
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto i:v)
    cout<<i.ff<<" "<<i.ss<<endl;
}