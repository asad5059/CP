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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        bool f=false;
        ll x,l,r,mid;
        cin>>x;
        l=-1,r=n;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(v[mid]<x)
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        if(v[r]==x)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}