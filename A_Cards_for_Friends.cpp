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
        ll w,h,n;
        cin>>w>>h>>n;
        ll an=1,f=0,m=h*w;
        while(m%2==0)
        {
            m/=2;
            an*=2;
            if(an>=n)
            break;
        }
        if(an>=n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
