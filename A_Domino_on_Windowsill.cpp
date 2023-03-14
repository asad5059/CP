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
    while (t--)
    {
        ll n,k1,k2,w,b;
        cin>>n>>k1>>k2;
        cin>>w>>b;
        ll whites=2*min(k1,k2)+abs(k1-k2);
        ll blck=abs(k1-k2)+2*(n-max(k1,k2));
        ll req_w=2*w,req_b=2*b;
        if(req_w<=whites && req_b<=blck)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";

    }
    
}