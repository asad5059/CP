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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll miin,mx;
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            miin=abs(v[0]-v[1]);
            mx=abs(v[n-1]-v[0]);
        }
        else if(i==n-1)
        {
            miin=abs(v[n-1]-v[n-2]);
            mx=abs(v[n-1]-v[0]);
        }
        else
        {
            miin=min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            mx=max(abs(v[0]-v[i]),abs(v[i]-v[n-1]));
        }
        cout<<miin<<" "<<mx<<endl;
    }
}