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
void mxchk(ll a[],ll pos,ll n,ll mxv)
{
    if(pos>=n) return;
    mxv=max(a[pos++],mxv);
    cout<<mxv<<" ";
    return mxchk(a,pos,n,mxv);
}
int main()
{
    fastio();
    ll n,mxv=-INT_MAX;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mxchk(a,0,n,mxv);
}