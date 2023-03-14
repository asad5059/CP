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
        ll x,f=0;
        cin>>x;
        if(x%2!=0)
        {
            cout<<"YES\n";
            f=1;
        }
        while(x%2==0)
        {
            x/=2;
        }

        if(x==1 && f==0)
        {
            cout<<"NO\n";
            f=1;
        }
        else if(x%2!=0 && f==0)
        cout<<"YES\n";
    }
}
