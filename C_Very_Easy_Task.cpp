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
ll n,x,y;
bool ok(ll m)
{
    return (m/x)+(m/y)>=n-1;
}
int main()
{
    fastio();
    cin>>n>>x>>y;
    ll l=-1,r=1e10,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            r=mid;
        }
        else
        l=mid;
    }
    cout<<r+min(x,y);
}