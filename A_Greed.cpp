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
    ll a[n],b[n],x=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        x+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    if(b[n-1]+b[n-2]>=x) cout<<"YES";
    else cout<<"NO";
}
