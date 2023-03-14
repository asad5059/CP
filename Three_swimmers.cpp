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
        ll x,a,b,c,cnt=0;
        cin>>x>>a>>b>>c;
        ll p=a-x%a, q=b-x%b, r=c-x%c;
        if(x==a || x==b || x==c)
        {
            cout<<0<<"\n";
        }
        else
        cout<<min(p,min(q,r))<<"\n";
    }
}