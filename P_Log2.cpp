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
ll x;
ll bs(double l,double r)
{
    if(abs(l-r)<1e-7)
    return r;
    double mid=(l+r)/2;
    if(pow(2,mid)>=x) r=mid;
    else l=mid;
    bs(l,r);
}
int main()
{
    fastio();
    cin>>x;
    ll r=bs(-1,70);
    if(x==1) r=0;
    cout<<r;
}