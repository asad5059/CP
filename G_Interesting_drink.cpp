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
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    ll q,x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        ll l=-1,r=n,m;
        while(l+1<r)
        {
            m=l-(l-r)/2;
            if(v[m]>x)
            {
                r=m;
            }
            else
            {
                l=m;
            }
        }
        cout<<r<<"\n";
    }
}