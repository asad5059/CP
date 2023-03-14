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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll q,x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        ll l=-1,r=n,mid;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(v[mid]<x)
            l=mid;
            else
            r=mid;
        }
        if(l==-1) cout<<"X ";
        else
        cout<<v[l]<<" ";
        l=-1,r=n;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(v[mid]<=x)
            l=mid;
            else
            r=mid;
        }
        if(r==n) cout<<"X\n";
        else
        cout<<v[r]<<"\n";
    }
}