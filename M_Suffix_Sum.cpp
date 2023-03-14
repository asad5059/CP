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
ll sz;
void sum(ll a[],ll m,ll n,ll s)
{
    if(n<sz-m)
    {
        cout<<s;
        return;
    }
    s+=a[n];
    n--;
    sum(a,m,n,s);
}
int main()
{
    fastio();
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sz=n;
    sum(a,m,n-1,0);
}