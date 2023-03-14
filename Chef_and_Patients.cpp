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
        ll n,hr=1;
        cin>>n;
        vector <pair<ll,ll>> v,v2;
        ll x;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            v.pb({-x,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            v2.pb({v[i].ss,hr});
            hr++;
        }
        sort(v2.begin(),v2.end());
        for(auto it:v2)
        cout<<it.ss<<" ";
        cout<<'\n';
    }
}