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
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll l,r,k,m1,m2,s,e,l2,r2;
    cin>>k;
    while(k--)
    {
        cin>>s>>e;
        l=-1;
        r=n;
        while(l+1<r)
        {
            m1=(l+r)/2;
            if(v[m1]>=s)
            {
                r=m1;
            }
            else
            l=m1;
        }
        l2=-1;
        r2=n;
        while(l2+1<r2)
        {
            m2=(l2+r2)/2;
            if(v[m2]<=e)
            {
                l2=m2;
            }
            else
            r2=m2;
        }
        //cout<<v[r]<<" "<<v[l2]<<endl;
        cout<<l2-r+1<<" ";
    }
}