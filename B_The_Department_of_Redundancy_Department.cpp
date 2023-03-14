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
    vector <ll> v,v2;
    while(cin>>n)
    {
        v.pb(n);
    }
    map <ll,ll> mp;
    for(ll i=0;i<v.size();i++)
    {
        if(mp[v[i]]==0)
        {
            v2.pb(v[i]);
        }
        mp[v[i]]++;
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" "<<mp[v2[i]]<<"\n";
    }
    
}