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
ll w,h,n;
bool good(ll m)
{
    return (m/w)*(m/h)>=n;
}
int main()
{
    fastio();
    cin>>w>>h>>n;
    ll l=0,r=max(w,h)*n,m;
    while(l+1<r)
    {
        m=(l+r)/2;
        if(good(m))
        {
            r=m;
        }
        else
        l=m;
    }
    cout<<r;
}