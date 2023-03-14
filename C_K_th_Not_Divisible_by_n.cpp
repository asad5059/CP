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
    while(t--)
    {
        ll n,k,l=-1,r=1e10,mid,x;
        cin>>n>>k;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(mid>=(mid/n)+k)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        cout<<r<<endl;
    }
}
