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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map <int,int> mp;
        vector <ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll f=0;
        for(int i=0;i<=101;i++)
        {
            if(!mp[i])
            {
                f=i;
                break;
            }
        }
        ll l=0;
        for(auto i:mp)
        {
            if(i.ss<2)
            {
                l=i.ff;
                break;
            }
        }
        cout<<f+l<<"\n";
    }
}