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
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":\n";
        ll n,q;
        cin>>n>>q;
        vector <ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        while (q--)
        {
            ll l,r,m;
            cin>>l>>r;
            ll l1,r1,m1,l2,r2,m2;
            l1=-1,r1=n;
            while(l1+1<r1)
            {
                m1=l1-(l1-r1)/2;
                if(v[m1]>=l)
                {
                    r1=m1;
                }
                else
                {
                    l1=m1;
                }
            }
            l2=-1,r2=n;
            while(l2+1<r2)
            {
                m2=l2-(l2-r2)/2;
                if(v[m2]<=r)
                {
                    l2=m2;
                }
                else
                {
                    r2=m2;
                }
            }
            cout<<l2-r1+1<<endl;
        }
    }
}