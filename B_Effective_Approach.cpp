#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    ll n,x;
    cin>>n;
    vector <ll> v1;
    map <ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]=i+1;
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        v1.pb(x);
    }
    ll c1=0,c2=0;
    for(int i=0;i<m;i++)
    {
        ll f=v1[i];
        c1+=mp[f];
        c2+=n-mp[f]+1;
        
    }
    cout<<c1<<" "<<c2;
}