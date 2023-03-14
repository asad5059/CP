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
       ll n,x;
        cin>>n>>x;
        vector<ll> vec(n+1);
        for(ll i=0;i<n;i++)
            cin>>vec[i];
        ll mx=0,mi=0;
        for(ll i=0;i<n;i++)
        {
            if(vec[i] % x == 0)
                mx += (vec[i] / x);
            else
                mx += (int)(vec[i] / x)+1;
        }
        for(ll i=0;i<n;i++)
        {
            mi += vec[i];
        }
        if(mi % x == 0)
            mi = (mi/x);
        else
            mi = (int)(mi/x)+1;
        cout<<mi<<" "<<mx<<"\n";
    }
}
