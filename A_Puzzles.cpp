#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    ll n,m,miin=INT_MAX;
    cin>>n>>m;
    vector <ll> v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll diff=abs(n-m);
    for(int i=0;i<=diff;i++)
    {
        ll x=v[i];
        miin=min(miin,v[i+n-1] - v[i]);

    }
    
    cout<<miin;
}
