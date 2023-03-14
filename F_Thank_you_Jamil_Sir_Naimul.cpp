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
    ll n,cnt=0;
    cin>>n;
    ll x=2*n;
    x--;
    vector <ll> v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
        if(v[i]<0) cnt++;
    }
    if(cnt==0)
    {
        cout<<accumulate(v.begin(),v.end(),0);
    }
    else
    {
        sort(v.begin(),v.end());
        ll sum=accumulate(v.begin(),v.end(),0);
        for(int i=0;i<n;i++)
        {
            v[i]*=-1;
            ll px=accumulate(v.begin(),v.end(),0);
            sum=max(px,sum);
        }
        cout<<sum;

    }
    
}