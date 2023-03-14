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
    map <pair<ll,ll>,string> mp;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        string s;
        cin>>a>>b>>s;
        mp[{a,b}]=s;
    }
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        cout<<mp[{a,b}]<<"\n";
    }
}