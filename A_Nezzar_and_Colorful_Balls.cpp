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
        ll n;
        cin>>n;
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        ll mx=0;
        for(auto it:mp)
        {
            ll q=it.ss;
            mx=max(mx,q);
        }
        cout<<mx<<"\n";
    }
    
}
